
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u16;
typedef signed int s16;
typedef unsigned long int u32;
typedef signed long int s32;
typedef float f32;


#define PORT0 0
#define PORT1 1
#define PORT2 2
#define PORT3 3


#define SET 1
#define CLEAR 0


extern void delay_ms(u16 ms);

/*--------------- Io Driver Function ----------------------------*/
extern void io_write(u8 port,u8 pin,u8 val);
extern u8 io_read(u8 port,u8 pin);


/*---------------- LCD Driver Function --------------------------*/
extern void lcd_cmd(u8 CMD);
extern void lcd_init();
extern void lcd_data(u8 CH);
extern void lcd_string(char *STR);
extern void lcd_integer(s16 NUM);


/*---------------- UART Driver Function --------------------------*/
extern void uart_init(s16 BAUD);
extern void uart_tx(u8 CH);
extern u8 uart_rx();
extern void uart_tx_string(u8 *US);



/*---------------- Interrupts Driver Function --------------------------*/
extern void en_ext0_interrupt(void);
extern void en_ext1_interrupt(void);
extern void en_timer0_interrupt(void);


/*---------------- ADC Driver Function --------------*/
extern u16 adc_read_POTE();
extern u16 adc_read_LDR();




/*----------------Check Function --------------------------*/
void start_car();
void alcohole_check();
void stop_car();


/*----------------Revers Function --------------------------*/
void range_detect();
void send_pulse();
u8 ultra_sonic();
void revers_car();




void initialize_all();
void function_all();