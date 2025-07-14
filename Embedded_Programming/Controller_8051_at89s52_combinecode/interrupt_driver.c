/* interrupt_driver.c */

#include <reg51.h>
#include "header.h"

#define led2 7
#define led3 6



extern s8 flag1,flag2,pwm;

u32 temp2;



/*-------------------- Timer0 Interrupt Enable (For PWM) -------------------------------*/
void en_timer0_interrupt()
{
	pwm=0;
		
		TMOD|=0x1;
		TH0=0;
		TL0=0;
		ET0=EA=1;
		TR0=1;
	
}

/*-----*/
void Timer0_Handlere(void) interrupt 1
{
TR0=0;
	
	
	if(io_read(PORT2,led2)==1 )
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




/*---------------------- External0 Interrupt Enable For(Ingnition) ----------------------*/
void en_ext0_interrupt()
{
	flag1=0;
	EA=EX0=1;
	IT0=1;

}



/*-----*/
void INT0_Handlere(void) interrupt 0
{

	flag1++;
  
}









/*---------------------- External1 Interrupt Enable For(Revers) ---------------------------*/
void en_ext1_interrupt()
{
   	flag2=0;
	EA=EX1=1;
	IT1=1;

}


/*-----*/
void INT1_Handlere(void) interrupt 2
{

	flag2++;

}




