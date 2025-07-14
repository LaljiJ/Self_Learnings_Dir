/* String LoopBack On Serial Terminal*/

#include "header.h"
void main()
{
	u8 arry[12],i;
	
	uart_init(9600);
	
while(1)
{
	
	for(i=0;i<12;i++)
	{
			arry[i]=uart_rx();
			if(arry[i]=='\r')
					break;
	}
	arry[i]='\0';
// 	arry[i]='\r';
// 	arry[i+1]='\n';
// 	arry[i+2]='\0';
	uart_string(arry);
	
}
	
}
