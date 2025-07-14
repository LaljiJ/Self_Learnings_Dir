
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u16;
typedef signed int s16;
typedef unsigned long int u32;
typedef signed long int s32;

#define PORT0 0
#define PORT1 1
#define PORT2 2
#define PORT3 3

#define SET 1
#define CLEAR 0

void delay_ms(u16 ms);
/******************************************/
extern void io_write(u8 port,u8 pib,u8 val);
extern u8 io_read(u8 port,u8 pin);


void lcd_cmd(u8 cmd);
void lcd_init(void);
void lcd_data(u8 ch);
void lcd_string(char *s);