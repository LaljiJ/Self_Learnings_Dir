/* Scan Char From KeyBouad Print It ASCII On Serial Terminal */

#include "header.h"
void main()
{
	u8 temp;
	uart_init(9600);
	
	while(1)
	{
		uart_string("\r\nEnter Char:");
		temp=uart_rx();
		uart_string("\r\nASCII:");
		uart_tx((temp/10)+48);
		uart_tx(temp%10+48);
	}


}
