/* scroll led 4 1 sec delay */

#include "header.h"
#define LED0 0
#define LED1 1
#define LED2 2
#define LED3 3
void main()
{
	while(1)
	{
		io_write(PORT2,LED0,CLEAR);
		delay_ms(100);
		io_write(PORT2,LED1,CLEAR);
		delay_ms(100);
		io_write(PORT2,LED2,CLEAR);
		delay_ms(100);
		io_write(PORT2,LED3,CLEAR);
		delay_ms(100);
		io_write(PORT2,LED3,SET);
		delay_ms(100);
		io_write(PORT2,LED2,SET);
		delay_ms(100);
		io_write(PORT2,LED1,SET);
		delay_ms(100);
		io_write(PORT2,LED0,SET);
		delay_ms(100);
	}



}

