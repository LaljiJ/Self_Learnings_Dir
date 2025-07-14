#include "header.h"
 u8 a[12],i;
void main()
{
   en_uart_interrupt();
	  uart_init(9600);
	   uart_string("Enter ABC :\r\n");
while(1)
{	
	  
	if((i==12)||(a[i-1]=='\r'))
	{
	 uart_string("Enter :");
	i=0;
	uart_string(a);
	uart_string("\r\n");
	}  
}
	 //  en_uart_interrupt();
	  // while(1)
	   //{
		 //en_uart_interrupt();
		 //  c++;
	   	//}
//	   for(i=0;i<12;i++)
//	   {
//	   		en_uart_interrupt();
//	   }

//while(1)
//{	
//	c++;
//}


}