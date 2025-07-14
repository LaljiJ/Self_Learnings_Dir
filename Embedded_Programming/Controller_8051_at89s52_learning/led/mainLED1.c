/* 1 LED Blink 1 sec delay */

#include "header.h"
#define LED 0

void main()
{		 
	while(1)
	{
		io_write(PORT2,LED,SET);
		delay_ms(1000);
		io_write(PORT2,LED,CLEAR);
	   	delay_ms(1000);
	}   

}