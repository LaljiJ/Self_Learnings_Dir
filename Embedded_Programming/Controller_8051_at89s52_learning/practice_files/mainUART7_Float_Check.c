#include "header.h"
void main()
{
	u8 temp[10],i;
	uart_init(9600);
	
	
while(1)
{
		for(i=0;i<10;i++)
		{	
		temp[i]=uart_rx();
			if(temp[i]=='\r')
				break;
		}
	temp[i]='\0';
		uart_string(temp);
		uart_string("\r\n");
}
	
	
	
	
	
//	uart_float(12.23);
// 	uart_float(-12.23);
// 	uart_float(0.23);
//	uart_float(-0.23);
// 	uart_float(0.0);
// 	uart_float(-12.2300);	
//	while(1);

}