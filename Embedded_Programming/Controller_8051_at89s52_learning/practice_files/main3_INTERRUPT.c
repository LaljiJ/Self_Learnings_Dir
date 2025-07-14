
#include "header.h"

u8 a[12],i;
void main()
{
	uart_init(9600);
	en_uart_interrupt();

	 uart_string("Enter String:\r\n");
	while(1)
	{
		if(i==12||a[i-1]=='\r')
		{
		 uart_string("Given Data:\r\n");
		 uart_string(a);
		 }
	}


}