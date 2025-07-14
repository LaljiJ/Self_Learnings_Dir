

#include "header.h"
void main()
{
	u8 arry[10],i;	
	uart_init(9600);

	while(1)
	{
			for(i=0;i<10;i++)
			{
				arry[i]=uart_rx();
					if(arry[i]=='\r')
							break;
			}
			arry[i]='\0';
			
			uart_string(arry);
			uart_string("\r\n");
	}
	
	
	
//	uart_integer(123);
// 	uart_integer(-12345);
// 	uart_integer(12000);
//	uart_integer(-12000);
// 	uart_integer(00);
	
//while(1);
}