#include "header.h"

void main()
{
	u8 temp;
	uart_init(9600);
	while(1)
	{
	uart_tx('L');
	i2c_device_write(0xA0,0x02,'A');
	delay_ms(10);
	temp=i2c_device_read(0xA0,0x02);
	uart_tx('B');
	
	uart_tx(temp);
	}
	//while(1);
	


}