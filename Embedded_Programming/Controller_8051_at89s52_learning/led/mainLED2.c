/* 2 LED blink at same time */

#include "header.h"
#define LED1 0
#define LED2 1
void main()
{		 
	while(1)
	{
		io_write(PORT2,LED1,SET);
		io_write(PORT2,LED2,SET);
		delay_ms(1000);
		io_write(PORT2,LED1,CLEAR);
		io_write(PORT2,LED2,CLEAR);
	   	delay_ms(1000);			 	
	}   

}
