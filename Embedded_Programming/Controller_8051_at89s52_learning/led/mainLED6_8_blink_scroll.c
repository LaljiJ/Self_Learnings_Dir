/* scroll led 8 1 sec delay */

#include "header.h"
//#define LED0 0
//#define LED1 1
//#define LED2 2
//#define LED3 3
//#define LED4 4
//#define LED5 5
//#define LED6 6
//#define LED7 7

void main()
{
u8 LED;
 	while(1)
	{
		for(LED=0;LED<8;LED++)
		{
			if(LED<=4)
			{
		  io_write(PORT2,LED,CLEAR);
		  delay_ms(100);
		  io_write(PORT2,LED,SET);
		  delay_ms(100);
		  	}
		  	if(LED>=4)
			{
		  io_write(PORT2,LED,SET);
		  delay_ms(100);
		  io_write(PORT2,LED,CLEAR);
		  delay_ms(100);
			}
		}
/********************************************/
		for(LED=7;LED>0;LED--)
		{
			if(LED>=4)
			{
		  io_write(PORT2,LED,SET);
		  delay_ms(100);
		  io_write(PORT2,LED,CLEAR);
		  delay_ms(100);
		  	}
		  	if(LED<4)
			{
		  io_write(PORT2,LED,CLEAR);
		  delay_ms(100);
		  io_write(PORT2,LED,SET);
		  delay_ms(100);
			}
		}

	 }


}

