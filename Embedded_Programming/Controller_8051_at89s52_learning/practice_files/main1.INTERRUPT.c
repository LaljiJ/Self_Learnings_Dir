#include "header.h"
u32 c;

main()
{

	uart_init(9600);
	en_uart_interrupt();
	
	while(1)
	{
		c++;
	}


}