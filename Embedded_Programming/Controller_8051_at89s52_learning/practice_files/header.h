

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

/******************************************/

extern void io_write(u8 port,u8 pib,u8 val);
extern u8 io_read(u8 port,u8 pin);

/******************************************/



