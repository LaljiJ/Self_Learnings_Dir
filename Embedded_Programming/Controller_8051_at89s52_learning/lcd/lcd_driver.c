#include<reg51.h>
#include "header.h"
sbit RS=P3^4;
sbit RW=P3^5;
sbit EN=P3^6;


/************* write command on lcd *********/
void lcd_cmd(u8 cmd)
{
	P0=cmd;
		RS=0;
		RW=0;
		EN=1;
			delay_ms(2);
		EN=0;
}



/************ initialize lcd ************/
void lcd_init() 
{
	lcd_cmd(0x2);
	lcd_cmd(0x38);	
	lcd_cmd(0xE);
	lcd_cmd(0x6);
	lcd_cmd(0x1);	
}



/*********** write data on lcd ***********/
void lcd_data(u8 ch)
{
	P0=ch;
		RS=1;
		RW=0;
		EN=1;
			delay_ms(2);
		EN=0;
}


/********* Collect String data **************/
void lcd_string(char *s)
{

	while(*s)
	{
		lcd_data(*s);
		s++;
	}

}
