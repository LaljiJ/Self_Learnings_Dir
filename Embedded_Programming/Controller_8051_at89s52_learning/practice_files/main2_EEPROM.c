#include "header.h"

void main()
{
u8 a[]="vector",temp[10];
	s8 i;
	uart_init(9600);
	
	for(i=0;a[i];i++)
	{
	i2c_device_write(0xA0,0x00+i,a[i]);
	delay_ms(10);
	temp[i]=i2c_device_read(0xA0,0x00+i);
	}
		
	uart_string(temp);
	
	while(1);

}