/* string Print On Serial Terminal */

#include "header.h"
void main()
{
	uart_init(9600);
	uart_string("LALJI JOSHI\r\n");  // in serial terminal \n not work 
																	// thats why used \r and \n
	uart_string("LALJI JOSHI\r\n");
	while(1);
	


}