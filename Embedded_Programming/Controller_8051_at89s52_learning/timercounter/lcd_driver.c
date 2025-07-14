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


/************* print integer on LCD ****************/
// void lcd_integer(s16 NUM)
// {
// 	s16 SUM=0,COUNT=0;
// 	u8 BUF[50],i;
// 		
// if(NUM<0)
// {	 
// 	lcd_data('-');
// 	NUM = -NUM;
// }

// if(NUM==0)
// {
// 	lcd_data('0');
// 	return;
// }
// 	
// 		while(NUM)
// 		{ 
// 			COUNT++;
// 			SUM=SUM*10+NUM%10;
// 			NUM=NUM/10;
// 		}

// 	 	for(i=0;COUNT;SUM=SUM/10,i++)
// 		{
// 			BUF[i]=(SUM%10)+48;
// 			COUNT=COUNT-1;	
// 		}

// BUF[i]='\0';

// lcd_string(BUF);

// }


/*************** print float on LCD ****************/
// void lcd_float(float FLOAT)
// {
// 	s16 INT=FLOAT;

// 	lcd_integer(INT);
// 	lcd_data('.');
// 	INT=((INT-FLOAT)*100);
// 	lcd_integer(INT+1);

// }					 


/*************** print Binary on LCD ****************/
// void lcd_binary(s16 BIN)
// {
// 	s8 POS;
// 	lcd_cmd(0xC0);
// 	
// 	for(POS=15;POS>=0;POS--)
// 	{
// 	lcd_integer(BIN>>POS&1);
// 	}

// }


/*************** CGRAM (Coustem Char Print) ****************/
// void lcd_cgram(u8 *CUS)
// {

// 	u8 I;
// 	lcd_init();
// 	lcd_cmd(0xC);
// 	
// 	lcd_cmd(0x40);  // point AC-> CGRAM
// 	
// 	for(I=0;I<8;I++)
// 	lcd_data(CUS[I]);
// 	
// 	lcd_cmd(0x80); // point AC-> DDRAM
// 	
// }






