/* pwm_driver.v */

#include <reg51.h>
#include "header.h"

#define led2 7
#define led3 6

extern s8 pwm;
u32 temp2;

void Timer0_Handlere(void) interrupt 1
{
TR0=0;
	
	if( io_read(PORT2,led2)==1 )
	{
		
		io_write(PORT2,led2,CLEAR);
		io_write(PORT2,led3,CLEAR);
		temp2=pwm;
	
			TH0=255-(temp2>>8)&255;
			TL0=255-temp2&255;
	}
	else
	{
		io_write(PORT2,led2,SET);
		io_write(PORT2,led3,SET);
		temp2=255-pwm;
			
		TH0=255-(temp2>>8)&255;
		TL0=255-temp2&255;
	}
	
TF0=0;
TR0=1;

}



void en_pwm()
{
	pwm=0;
	TMOD|=0x1;
	TH0=0;
	TL0=0;
	ET0=EA=1;
	TR0=1;
}