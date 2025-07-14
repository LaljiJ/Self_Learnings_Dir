/* GSM Basic */

#include "header.h"
void main()
{
	uart_init(9600);
	
	while(1)
	{
		
		uart_string("AT\r\n");  // Write Command On Terminal
		delay_ms(1000); 
		uart_string("ATD9426175791;\r\n"); //Call On This Mobile Number
		delay_ms(5000);
		uart_string("ATH\r\n"); // Cut Call On After 5sec
		
	}

}
