=========================================================================================================================================================================
To implement a Board Support Package (BSP) completely from scratch for a fresh AM3359 board after power-on, you must build the entire software stack yourself. You cannot rely on stock BeagleBone images because your custom board may use different GPIO pins, a different DDR3 memory chip, or a different network PHY.

Here is the step-by-step scenario blueprint and how to implement each phase from scratch.
=========================================================================================================================================================================


Phase 1: Hardware-to-Software Handshake (The DDR Register Matrix)
------------------------------------------------------------------
Before any OS can boot, the processor must be told exactly how to talk to your physical DDR3 chip.

The Scenario: 
	- If the timing settings (CAS latency, refresh rates) are off by even a fraction of a nanosecond, the RAM will corrupt data, causing a silent boot loop.

The Implementation:
	- Download the datasheet for the exact DDR3 part number soldered on your board.
	
	- Download the TI AM335x DDR Calculation Tool (an official application spreadsheet provided by Texas Instruments).
	
	- Input your DDR3 datasheet parameters (clock speed, setup times, hold times, and your PCB trace lengths) into the tool.
	
	- The tool outputs a block of hex values representing the AM335x EMIF (External Memory Interface) registers. Keep these ready for Phase 2.



Phase 2: Writing and Configuring U-Boot from Scratch
------------------------------------------------------
You need to modify the open-source U-Boot bootloader source code to recognize your custom board layout.

The Scenario: 
	- The BootROM loads U-Boot SPL into internal SRAM. SPL applies your DDR registers, turns on the RAM, loads the main U-Boot image into RAM, and opens a UART console.

The Implementation:
	- Clone the clean, mainline U-Boot source tree:
		- git clone https://denx.de
		- https://github.com/u-boot/u-boot.git
		
	- Navigate to board/ti/am335x/board.c (or create your own board subdirectory).
	
	- Replace the existing DDR3 struct values with the precise register values you generated in Phase 1 (inside struct ddr3_data and struct emif_regs).
	
	- Modify the pin multiplexing (Pinmux). Ensure the UART0 TX and RX pins are configured correctly for your board's physical layout so you can see boot messages.
	
	- Compile the code using a cross-compiler:
		make am335x_evm_defconfig
				- This loads the default U-Boot configuration for the AM335x EVM.
				- grep CONFIG_ARCH .config
				- grep CONFIG_AM33XX .config
				
		make -j$(nproc) CROSS_COMPILE=arm-linux-gnueabihf- ARCH=arm
				- Download toolchain:	https://gitlab.arm.com/tooling/gnu-toolchains-for-arm
				- Set it on /opt/
				- export cross toolchain path:
				- Provide path to CROSS_COMPILE

	- This gives you your initial boot files: MLO and u-boot.img.
				- After a successful AM335x U-Boot build, MLO and u-boot.img are normally generated in the root directory of your U-Boot source tree.
				- /home/u-boot/
						├── MLO
						├── u-boot.img
						├── u-boot
						├── spl/
						│   └── u-boot-spl
						└── ...
	
Note:
What is Pinmux?
	- Pinmux = Pin Multiplexing.
	- A SoC has a limited number of physical pins, and one physical pin can often perform multiple functions.
	- For example, one pin might support:
		PIN_X
		 ├── GPIO
		 ├── UART0_TX
		 ├── SPI0_CLK
		 ├── I2C0_SDA
		 └── PWM
	- The SoC cannot normally use all of these functions on that physical pin at the same time.
	- Pinmux tells the SoC which peripheral function a physical pin should perform.



Phase 3: Writing the Linux Device Tree (DTS) from Scratch
----------------------------------------------------------
The Linux kernel does not know what components are soldered to your board. You must write a Device Tree file—a hardware description blueprint—to tell Linux exactly where everything is located.

The Scenario: 
	- Without a correct Device Tree, the Linux kernel will boot, find no serial console, no network chips, and no power management settings, resulting in an immediate kernel panic.


The Implementation:
	- Create a blank file named am335x-customboard.dts in the Linux kernel source directory under arch/arm/boot/dts/.
		Download linux kernel source (Do not download mainline repo, download just vendor specific): https://github.com/torvalds/linux

	- Define your basic SoC skeleton and include the core definitions:
		/dts-v1/;
		#include "am33xx.dtsi"
		
	- Map the Console UART: Explicitly define which UART port is your debug console and set its status to "okay".
	
	- Map the I2C PMIC: Add the tps65217 chip under the correct I2C bus node so the kernel can control system voltages dynamically.
	
	- Map Peripherals: Add your specific Ethernet PHY, MMC (SD/eMMC slot) lines, and custom status LEDs.

	
		
Phase 4: Compiling the Linux Kernel from Scratch
-------------------------------------------------
You must configure and build a tailored Linux kernel stripped of unnecessary drivers, containing only what your custom board requires.

The Scenario: 
	- The kernel receives control from U-Boot, initializes drivers based on your Device Tree, mounts your storage device, and launches the first user application.
	
The Implementation:
	- Clone the stable long-term support (LTS) Linux kernel:
		git clone https://kernel.org
		https://www.kernel.org/ or https://www.kernel.org/pub/linux/kernel/v6.x/
			
	- Generate a default configuration for ARM architecture:
		make omap2plus_defconfig ARCH=arm
		
	- (Optional) Customize components via a visual menu (e.g., adding a unique Wi-Fi or USB driver):
		make menuconfig ARCH=arm
		
	- Compile the kernel image and your custom Device Tree file:
		make zImage modules dtbs -j$(nproc) CROSS_COMPILE=arm-linux-gnueabihf- ARCH=arm
		
	- This outputs a compressed kernel image (zImage) and a compiled binary device tree (am335x-customboard.dtb).



Phase 5: Creating the Root File System (RootFS) from Scratch
-------------------------------------------------------------
The RootFS contains your command-line tools, scripts, and applications (like sh, ls, and system initialization).

The Scenario: 
	- Once the Linux kernel initializes the hardware, it looks for an initialization program (typically /sbin/init) to hand control over to a user terminal.

The Implementation:
	- Use a tool like BusyBox to generate a minimal embedded environment, or build a robust distribution root using Buildroot or the Yocto Project.
		- Busybox:	https://busybox.net/
		- Buildroot:	https://buildroot.org/
		- Yocto project: https://www.yoctoproject.org/
		
	- If using Buildroot, select target architecture ARM (little endian), target variant cortex-A8, and select your desired packages (like OpenSSH or Python).
	
	- Run make to output a clean rootfs.tar file containing the foundational folders (/bin, /sbin, /etc, /dev).



Phase 6: Final Deployment and Sanity Testing
---------------------------------------------	
	- Format a clean MicroSD card with a FAT32 boot partition and an ext4 root partition.
	
	- Copy MLO and u-boot.img onto the FAT32 partition.
	
	- Copy zImage and your compiled am335x-customboard.dtb onto the FAT32 partition as well.
	
	- Extract your rootfs.tar archive onto the ext4 partition.
	
	- Pop the card into the fresh board, connect your UART debug line, and power on.
	
	


Learning Required:
==================
1. Understand the technical datasheet
2. Understand Uboot build , modify,
3. Pinmuxing
4. Understand the board scematic
5. Writing dts
6. Configure linux kernel, compile
7. creating rootfs (busybox, builldroot, yoctoproject)













=========================================================================================================================================================
Complete Hardware Board Bring-Up Flow :

=========================================================================================================================================================
            1. Collect Hardware Documentation
                    ↓
            2. Understand SoC & Board Architecture
                    ↓
            3. Verify Power Supply
                    ↓
            4. Verify Clocks & Reset
                    ↓
            5. Identify Boot Configuration
                    ↓
            6. Setup UART/JTAG Debug
                    ↓
            7. Verify Boot ROM
                    ↓
            8. Prepare Cross-Compilation Toolchain
                    ↓
            9. Build/Port First-Stage Bootloader
                    ↓
            10. Initialize DDR
                    ↓
            11. Build/Port U-Boot
                    ↓
            12. Boot Linux Kernel
                    ↓
            13. Create/Port Device Tree
                    ↓
            14. Create Root Filesystem
                    ↓
            15. Build Complete Image
                    ↓
            16. Move to Yocto
                    ↓
            17. Enable Board Support Package
                    ↓
            18. Enable Peripheral Drivers
                    ↓
            19. Validate Every Peripheral
                    ↓
            20. Build SDK
                    ↓
            21. Application Development
                    ↓
            22. Debugging & Optimization
                    ↓
            23. Production Image
                    ↓
            24. Manufacturing / Factory Programming



1. Collect Hardware Documentation:
===================================
What to collect
    Board schematic
    PCB layout
    BOM
    SoC datasheet
    SoC reference manual
    SoC hardware design guide
    Reference board schematic
    DDR documentation
    PMIC datasheet
    Ethernet PHY datasheet
    eMMC/NAND/NOR datasheet
    USB/PCIe documentation
    Crystal/oscillator information
    Connector pinout
    Test-point information

Why?
    Software needs to know what hardware actually exists.

For example:
    SoC
    ├── I2C0 → PMIC
    ├── I2C1 → Sensor
    ├── SPI0 → Flash
    ├── UART0 → Debug console
    ├── SDIO → Wi-Fi
    └── ETH → Ethernet PHY

Without this information, you cannot correctly configure the bootloader, Device Tree, or Linux drivers.



2. Understand SoC and Board Architecture:
==========================================
    | Item         | Example                       |
    | ------------ | ----------------------------- |
    | SoC          | Amlogic / NXP / TI / STM32MP1 |
    | CPU          | Cortex-A53                    |
    | Architecture | ARM64                         |
    | RAM          | 2 GB DDR4                     |
    | Storage      | 8 GB eMMC                     |
    | Boot         | eMMC                          |
    | Debug        | UART/JTAG                     |
    | Ethernet     | Gigabit PHY                   |
    | USB          | USB 2.0/3.0                   |
    | Display      | HDMI/MIPI                     |
    | Camera       | MIPI CSI                      |

Why?
    You need to understand the boot chain and hardware dependency graph before writing software.



3. Verify Power Supply
=======================
Before software bring-up, verify the board electrically.

Check:
    Input Power
        ↓
    PMIC
        ↓
    CPU voltage
    DDR voltage
    I/O voltage
    Peripheral voltage

Check:
    12V/5V/3.3V input
    1.8V
    1.2V
    CPU core voltage
    DDR voltage
    I/O voltage
    PMIC enable signals
    Power sequencing

Use:
    Multimeter
    Oscilloscope
    Logic analyzer

Why?
    If power is wrong, the processor may never execute code. (No software can fix a missing/incorrect power rail.)



4. Verify Clock and Reset
==========================
Check:
    Crystal/oscillator
    Main clock
    RTC clock
    PLL
    Reset signals
    Power-on reset
    Watchdog reset

Why?
    The CPU needs a valid clock and reset sequence before executing instructions.

Typical sequence:
    Power stable
        ↓
    Clock stable
        ↓
    Reset released
        ↓
    CPU starts



5. Identify Boot Configuration:
===============================
Determine:
    Boot from eMMC?
    SD?
    SPI-NOR?
    NAND?
    USB?
    Network?

Also identify:
    Boot straps
    Boot pins
    DIP switches
    BOOT_SEL pins
    Recovery mode

Why?
    The SoC's Boot ROM needs to know where to look for the first bootloader.

Example:
    Power ON
    ↓
    Boot ROM
    ↓
    Check boot pins
    ↓
    Select eMMC
    ↓
    Read bootloader



6. Setup UART Debug Console:
============================
This is one of the most important early steps.

Connect:
    Board TX → USB-UART RX
    Board RX → USB-UART TX
    Board GND → USB-UART GND

Then determine:
    UART number
    Baud rate
    Data bits
    Stop bits
    Parity

Common configuration:
    115200
    8 data bits
    No parity
    1 stop bit

Why?
    UART gives you visibility into the boot process. 
    
Without UART:
    you may see only: Board doesn't boot
With UART:
    you may see below: You can identify where boot fails.
    Boot ROM
    DDR init
    U-Boot
    Linux
    Kernel panic
    Driver error
    Rootfs error



7. Verify Boot ROM:
===================
The Boot ROM is code permanently stored inside the SoC.

Typical flow:
    Power ON
    ↓
    Boot ROM
    ↓
    Boot device detection
    ↓
    Load first-stage bootloader
    ↓
    Execute bootloader

What to check
    Try to determine whether the SoC:
    Detects the boot medium
    Attempts to load bootloader
    Enters recovery mode
    Produces UART output

Why?
    This tells you whether the fundamental SoC/board boot mechanism is working.



8. Prepare Cross-Compilation Toolchain
=======================================
For an ARM64 board, your host PC might be x86-64 Ubuntu.

You need:
    Host PC
    x86-64
    │
    │ cross compiler
    ↓
    ARM64
    │
    ↓
    Target board

Typical components:
    binutils
    GCC
    libgcc
    glibc/musl
    libstdc++
    GDB

Why?
    Your Ubuntu PC and target CPU normally have different architectures.
    The host compiler produces  :   x86-64 executable
    but the board needs         :   ARM64 executable
    Therefore you need a cross-toolchain.



9. Build / Port First-Stage Bootloader
======================================
Depending on SoC, this may be: or another vendor-specific chain.
    ROM
    ↓
    BL2/SPL
    ↓
    TF-A
    ↓
    U-Boot

Responsibilities can include:
    Basic CPU initialization
    Clock initialization
    DDR initialization
    PMIC initialization
    Storage initialization
    Loading the next boot stage

Why?
    The Boot ROM is intentionally limited.
    It needs a small piece of software to perform additional hardware initialization.



10. Initialize DDR
====================
This is a critical step.

Initialize:
    DDR controller
    DDR PHY
    Timing
    Frequency
    Training/calibration
    Memory size

Example:
    DDR4
    2 GB

Why?
    Linux and most sophisticated bootloader code need RAM.

If DDR initialization fails:
    CPU
    ↓
    Bootloader
    ↓
    DDR initialization ❌
    ↓
    STOP


Important
----------
DDR configuration is highly SoC and board specific.

You normally start from:
    SoC vendor BSP
    Reference board
    DDR vendor configuration
    Board schematic



11. Build / Port U-Boot
========================
Once basic hardware initialization works, bring up U-Boot.

U-Boot provides:
    Bootloader shell
    Storage access
    Network access
    Environment variables
    Kernel loading
    Device Tree loading
    Boot arguments
    Firmware update mechanisms

Typical console:
    U-Boot>

Test:
    U-Boot> mmc list
    U-Boot> mmc info
    U-Boot> printenv
    U-Boot> help

Why?
    U-Boot is the bridge between low-level hardware initialization and Linux.



12. Verify Storage:
====================
Test the actual boot/storage device.

For example:
    eMMC
    SD
    SPI-NOR
    NAND

Test:
    Detection
    Read
    Write
    Partition table
    Boot partitions

Why?
    You need a reliable place to store:
    Bootloader
    Kernel
    Device Tree
    Root filesystem
    Application



13. Build / Port Linux Kernel
==============================
Get the correct kernel source.

Then configure:
    CPU
    Memory
    MMC/eMMC
    USB
    Ethernet
    UART
    I2C
    SPI
    GPIO
    RTC
    Watchdog
    Display
    Camera
    Audio

Example:
    make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- <board_defconfig>
    make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- -j$(nproc)

Why?
    The kernel provides:
    Process management
    Memory management
    Device drivers
    Networking
    Filesystems
    Security
    User-space interfaces



14. Create / Port Device Tree
==============================
The Device Tree describes board hardware to Linux.

Example:
    CPU
    ├── UART
    ├── I2C
    │    └── Sensor
    ├── SPI
    │    └── Flash
    ├── MMC
    │    └── eMMC
    └── Ethernet
        └── PHY

Example information:
    &uart0 {
        status = "okay";
    };

    &i2c1 {
        status = "okay";
    };


Why?
    The kernel needs to know: Which hardware is physically connected and how is it connected?
    This is especially important for custom boards.



15. Create Root Filesystem
===========================
You need a filesystem containing user-space programs.

Typical contents:
    /bin
    /sbin
    /etc
    /lib
    /usr
    /dev
    /proc
    /sys

Minimum components:
    init
    shell
    libc
    utilities
    device nodes
    configuration

Possible systems:
    BusyBox
    Buildroot
    Debian/Ubuntu
    Yocto-generated rootfs

Why?
    The kernel alone is not a complete operating system environment.

Boot sequence:
    Bootloader
        ↓
    Linux kernel
        ↓
    Root filesystem
        ↓
    init/systemd
        ↓
    Applications



16. First Linux Boot
======================

Now combine:
    Bootloader
    +
    Kernel
    +
    Device Tree
    +
    Root filesystem

Typical:
    U-Boot
    ↓
    Load Image
    ↓
    Load DTB
    ↓
    booti/bootm
    ↓
    Linux
    ↓
    init
    ↓
    Shell

Your first major milestone is:  root@board:~#
🎯 This means basic board bring-up has succeeded.



17. Move to Yocto
===================
Once you understand the low-level boot process, build the production system with Yocto.

Typical Yocto structure:
    poky/
    meta-openembedded/
    meta-vendor/
    meta-your-board/

Create:
    meta-myboard/

with:
    conf/
    recipes-bsp/
    recipes-kernel/
    recipes-core/
    recipes-apps/

Why?
    Yocto allows you to create a repeatable embedded Linux distribution.
    Instead of manually doing:
        kernel
        rootfs
        libraries
        applications
        configs
        packages
    Yocto builds the complete image automatically.



18. Create Board Machine Configuration
======================================

Example concept:
    conf/machine/myboard.conf

Define:
    CPU architecture
    Bootloader
    Kernel
    Device Tree
    Image format
    Machine features
    Serial console
    Storage

Why?
    Yocto needs to know:    "What exactly is my target board?"



19. Create BSP Layer
=======================
Your board-specific layer could look like:

meta-myboard/
├── conf/
│   ├── layer.conf
│   └── machine/
│       └── myboard.conf
│
├── recipes-bsp/
├── recipes-kernel/
├── recipes-core/
└── recipes-apps/

Why?
    It separates your board customization from upstream/vendor layers.
    This makes maintenance much easier.



20. Enable Peripheral Drivers
=============================
Now bring up peripherals one by one.

Recommended order:
    UART
    ↓
    GPIO
    ↓
    I2C
    ↓
    SPI
    ↓
    MMC/eMMC
    ↓
    Ethernet
    ↓
    USB
    ↓
    RTC
    ↓
    Watchdog
    ↓
    Audio
    ↓
    Display
    ↓
    Camera
    ↓
    Wi-Fi/Bluetooth

Why one by one?
    If you enable everything simultaneously and something fails:
        50 changes
        ↓
        Boot failure
        ↓
        Which change caused it?

    Instead:
        Enable UART
        ↓
        Test
        ↓
        Enable I2C
        ↓
        Test
        ↓
        Enable SPI
        ↓
        Test

    This makes debugging much easier.



21. Validate Every Peripheral
==============================
For each peripheral, perform:
    Hardware
    ↓
    Device Tree
    ↓
    Kernel driver
    ↓
    /dev or sysfs
    ↓
    User-space test

Example Ethernet:
    PHY
    ↓
    Device Tree
    ↓
    MAC driver
    ↓
    PHY driver
    ↓
    eth0
    ↓
    IP address
    ↓
    ping



22. Build the Toolchain / SDK
==============================
Once the Linux system is stable, generate the SDK.

SDK normally contains:
    Cross compiler
    Headers
    Libraries
    Sysroot
    pkg-config
    CMake tools
    Debugging tools

Example:
    aarch64-linux-gnu-gcc

    sysroot/
    ├── usr/include
    ├── usr/lib
    └── lib

Why?
    Application developers should be able to compile: (without rebuilding the entire Yocto system.)

    Application source
        ↓
    SDK
        ↓
    ARM64 executable
        ↓
    Board



23. Application Development
============================
Now develop your actual product application.

For example:
    Application
    ├── Qt
    ├── Camera
    ├── Networking
    ├── SQLite
    ├── GPIO
    ├── CAN
    ├── RS485
    └── Business logic

Why?
    At this point the underlying platform is stable.
    Your application should not be responsible for basic board initialization.



24. Debugging Infrastructure
=============================

Set up:
    GDB
    gdbserver
    strace
    ltrace
    perf
    ftrace
    dmesg
    journalctl

Hardware debugging:
    UART
    JTAG
    Oscilloscope
    Logic Analyzer

Why?
    You need different tools for different layers.

    Power problem       → Oscilloscope
    Boot problem        → UART
    CPU/register issue  → JTAG
    Kernel problem      → dmesg
    Application crash   → GDB
    Performance problem → perf



25. Security
=============
After basic functionality:
    Secure Boot
    Signed bootloader
    Signed kernel
    Verified boot
    Encrypted filesystem
    Key management
    Debug-port security

For example:
    Boot ROM
    ↓
    Verify BL
    ↓
    Verify Kernel
    ↓
    Verify RootFS
    ↓
    Linux

Why?
    Production devices must prevent unauthorized firmware from being executed.



26. OTA / Firmware Update
==========================
Design:
    Application
        ↓
    Update Agent
        ↓
    Download firmware
        ↓
    Verify signature
        ↓
    Write inactive partition
        ↓
    Reboot
        ↓
    Test new firmware
        ↓
    Rollback if failure

Why?
    Field devices need a safe way to receive firmware updates.



27. Production Image
=====================
Eventually your build should produce something like:
    myboard-image.wic

containing:
    Bootloader
    Kernel
    DTB
    RootFS
    Applications
    Configuration

Why?
    This becomes the reproducible firmware image used for manufacturing.



28. Manufacturing / Factory Programming
========================================
Define:
    Board programming
    ↓
    eMMC/NAND/SPI programming
    ↓
    MAC address
    ↓
    Serial number
    ↓
    Device certificates
    ↓
    Calibration
    ↓
    Functional test
    ↓
    Final firmware

Why?
    Development firmware and production manufacturing must be repeatable.



29. Final Board Validation
============================
Perform:

Hardware
    Power cycling
    Voltage validation
    Thermal testing
    DDR testing
    Storage testing

Software
    Boot test
    Reboot test
    Watchdog test
    Network test
    USB test
    Peripheral test

Stress
    CPU stress
    Memory stress
    Storage stress
    Network stress
    Thermal stress
    Long-duration test

Why?
    A board that boots once is not necessarily production-ready.



The Complete Dependency Chain
==============================
                 HARDWARE
                    │
                    ↓
             Power / Clock
                    │
                    ↓
                Boot ROM
                    │
                    ↓
             First Bootloader
                    │
                    ↓
                  DDR
                    │
                    ↓
                 U-Boot
                    │
          ┌─────────┴─────────┐
          ↓                   ↓
       Storage              Network
          │
          ↓
       Kernel
          │
          ↓
     Device Tree
          │
          ↓
       Drivers
          │
          ↓
      Root Filesystem
          │
          ↓
         Yocto
          │
          ↓
        SDK
          │
          ↓
     Applications
          │
          ↓
       Production









====================================================================================================================================================================================
Processor architecture type:

====================================================================================================================================================================================

1. By Instruction Set Design Philosophy
    - CISC (Complex Instruction Set Computer)
    - RISC (Reduced Instruction Set Computer)
    - VLIW (Very Long Instruction Word)
    - MISC (Minimal Instruction Set Computer)
    - OISC (One Instruction Set Computer)

2. Commercial & Open-Source Instruction Set Architectures (ISAs)
    - x86 / x86-64
    - ARM
        - Cortex-A (Application - For high end application)
        - Cortex-R (Real-Time - For real time application)
        - Cortex-M (Microcontroller - For low power component application)
    - RISC-V
    - MIPS
    - POWER / Power PC
    - SPARC
    - Alpha

3. By Hardware Core Structure
    - Von Neumann Architecture
    - Harvard Architecture
    - Modified Harvard Architecture

4. By Specialized Function
    - DSP (Digital Signal Processor)
    - GPU (Graphics Processing Unit)
    - NPU / TPU (Neural/Tensor Processing Unit)








====================================================================================================================================================================================
Memory Types:

====================================================================================================================================================================================

1. Volatile Memory (Volatile memory loses its data when power is removed.)
    - RAM (Random Access Memory)
            - DRAM (Dynamic RAM)
                    - FPM DRAM
                    - EDO DRAM
                    - BEDO DRAM
                    - SDRAM
                    - DDR SDRAM
                    - DDR2 SDRAM
                    - DDR3 SDRAM
                    - DDR4 SDRAM
                    - DDR5 SDRAM
            - LPDDR (Low Power DDR)
                    - LPDDR
                    - LPDDR2
                    - LPDDR3
                    - LPDDR4
                    - LPDDR4X
                    - LPDDR5
                    - LPDDR5X
                    - LPDDR6
            - Graphics Memory
                    - VRAM
                    - SGRAM
                    - WRAM
                    - GDDR2
                    - GDDR3
                    - GDDR4
                    - GDDR5
                    - GDDR5X
                    - GDDR6
                    - GDDR6X
            - High Bandwidth Memory
                    - HBM
                    - HBM2
                    - HBM2E
                    - HBM3
                    - HBM3E
    - SRAM – Static RAM
            - Asynchronous SRAM
            - Synchronous SRAM
            - Pipeline Burst SRAM
            - QDR SRAM
            - DDR SRAM
            - PSRAM

    - CPU Internal Volatile Memory
            - Registers
                    - General Purpose Registers
                    - Program Counter (PC)
                    - Stack Pointer (SP)
                    - Status Registers
                    - Control Registers
                    - Floating Point Registers
                    - Vector Registers
            - Cache Memory
                    - L1 Cache
                    - L2 Cache
                    - L3 Cache
                    - L4 Cache
    - Other Volatile Memory
            - FIFO Memory
            - Dual-Port RAM
            - Multi-Port RAM
            - Circular Buffer Memory
            - Scratchpad Memory
            - Tightly Coupled Memory (TCM)
            - CAM – Content Addressable Memory
            - TCAM – Ternary Content Addressable Memory


2. Non-Volatile Memory (Non-volatile memory retains its data even when power is removed.)
    - ROM (Read-Only Memory)
            - Mask ROM
            - PROM
            - EPROM
            - EEPROM
    - Flash Memory
            - NOR Flash
                    - Parallel NOR Flash
                    - SPI NOR Flash
                    - Quad SPI NOR Flash
                    - Octal SPI NOR Flash
            - NAND Flash
                    - SLC NAND
                    - MLC NAND
                    - TLC NAND
                    - QLC NAND
                    - PLC NAND
                    - Parallel NAND
                    - SPI NAND
    - Flash-Based Storage(These are storage devices based primarily on NAND Flash)
            - eMMC
            - UFS
            - SSD
            - USB Flash Drive
            - SD Card
            - SDHC
            - SDXC
            - SDUC
    - Non-Volatile RAM (NVRAM)
            - MRAM
            - STT-MRAM
            - FRAM / FeRAM
            - PCM / PRAM
            - ReRAM / RRAM
            - NVDIMM
            - Battery-Backed SRAM
