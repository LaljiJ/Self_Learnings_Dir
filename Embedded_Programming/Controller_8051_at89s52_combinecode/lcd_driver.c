/* lcd_driver.c */

#include <reg51.h>
#include "header.h"
sbit RS=P3^4;
sbit RW=P3^5;
sbit EN=P3^6;


/************* Write Command On LCD *********/
void lcd_cmd(u8 CMD)
{
	P0=CMD;

		RS=0;
		RW=0;
		EN=1;
			delay_ms(2);
		EN=0;
}



/************ Initialize LCD ************/
void lcd_init() 
{
	lcd_cmd(0x2);
	lcd_cmd(0x38);	
	lcd_cmd(0xE);
	lcd_cmd(0x6);
	lcd_cmd(0x1);	
}



/*********** Write Data On LCD ***********/
void lcd_data(u8 CH)
{
	P0=CH;

		RS=1;
		RW=0;
		EN=1;
			delay_ms(2);
		EN=0;
}



/********* Collect String data **************/
void lcd_string(char *STR)
{

	while(*STR)
	{
		lcd_data(*STR);
		STR++;
	}

}



/************* Print Integer On LCD ****************/
void lcd_integer(s16 NUM)
{
	s16 SUM=0,COUNT=0;
	u8 BUF[50],i;
		
if(NUM<0)
{	 
	lcd_data('-');
	NUM = -NUM;
}

if(NUM==0)
{
	lcd_data('0');
	return;
}
	
		while(NUM)
		{ 
			COUNT++;
			SUM=SUM*10+NUM%10;
			NUM=NUM/10;
		}

	 	for(i=0;COUNT;SUM=SUM/10,i++)
		{
			BUF[i]=(SUM%10)+48;
			COUNT=COUNT-1;	
		}

BUF[i]='\0';

lcd_string(BUF);

}
