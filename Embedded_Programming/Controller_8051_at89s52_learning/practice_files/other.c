#include <reg51.h>
#include "header.h"

void delay_timer0()
{
TMOD|=0x01; //240
	//TR0=1;
	TH0=15547>>8;
	TL0=15547;
	TR0=1;
	while(TF0==0);
	TR0=0;
		TF0=0;
}

void delay_500ms()
{
	u8 i;
for(i=0;i<20;i++)	//40
delay_timer0(); //80

}

void main()
{
	
	//delay_timer0();
	delay_500ms(); //4
	while(1);
	
}