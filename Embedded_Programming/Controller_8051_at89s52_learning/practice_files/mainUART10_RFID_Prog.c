/* RFID Prrogram */


#include "header.h"
void main()
{
	u8 buf[13];
	
	uart_init(9600);
	lcd_init();
	
	while(1)
	{
		
		uart_rx_string(buf,12);
		uart_string(buf);
		lcd_cmd(0x1);
		lcd_string(buf);
	}




}
