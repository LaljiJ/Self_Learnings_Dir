/* Not Complete */

#include <stdlib.h>
#include "header.h"
void main()
{

while(1)
{
	u8 temp[10],temp2[10],i;
	s32 T1,T2;

	uart_init(9600);
	
	uart_string("\r\nEnter The 1 Number:");
	for(i=0;i<10;i++)
	{
	temp[i]=uart_rx();
	uart_tx(temp[i]);
		if(temp[i]=='\r')
		break;
	}
	temp[i]='\0';

	uart_string("\r\nEnter The 2 Number:");
	for(i=0;i<10;i++)
	{
	temp2[i]=uart_rx();
	uart_tx(temp2[i]);
		if(temp2[i]=='\r')
		break;
	}
	temp2[i]='\0';

		 T1=atoi(temp);
		 T2=atoi(temp2);

	uart_calculator_multidigit(T1,T2);
	


}




}