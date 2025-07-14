#include "header.h"
void main()
{
	u8 temp;
	uart_init(9600);
	while(1)
	{
	temp=uart_rx();
	uart_tx(temp);
	}
	//while(1);



}