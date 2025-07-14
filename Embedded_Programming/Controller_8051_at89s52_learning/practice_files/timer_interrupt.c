#include <reg51.h>
#include "header.h"
sbit LED=P3^7;
s32 c2=0;
void TIMER0_Handeler(void) interrupt 1
{
TR0=0;
LED=~LED;
	c2++;
TH0=15547>>8;
TL0=15547;

TR0=1;	
}

void en_timer0_interrupt()
{
TMOD|=0x01;
TH0=15547+344>>8;
TL0=15547+344;
	
EA=ET0=1;
TR0=1;	
}

void timer_delay_1sec()
{
  u8 i;
	for(i=0;i<20;i++)
	en_timer0_interrupt();


}



