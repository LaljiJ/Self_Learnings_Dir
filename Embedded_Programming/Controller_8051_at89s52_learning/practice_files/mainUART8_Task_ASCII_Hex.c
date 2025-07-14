#include "header.h"
void main()
{
	u8 temp;
	
  	uart_init(9600);
	
while(1)
{
	
	uart_string("\r\nEnter The Char:");
	temp=uart_rx();
	
	uart_tx(temp);
	
	uart_string("\r\nASCII:");
	uart_ascii(temp);
	
	uart_string("\r\nHex Value:");
	uart_hex(temp);
	
	uart_string("\r\nOctal Value:");
	uart_octal(temp);
	
	uart_string("\r\n");
	
}


}