 #include "header.h"

 void main()
 {
 	uart_init(9600);
	
	while(1)
	{
	uart_tx('A');
	}
 	 //while(1);
 }