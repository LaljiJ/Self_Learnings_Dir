#include "header.h"

void main()
{
u16 temp;	
lcd_init();
	
	while(1)
	{
		temp=adc_read();
			lcd_cmd(0x1);
			lcd_cmd(0x80);
			lcd_integer(temp);
			lcd_cmd(0xC0);
			lcd_float((temp*5.0)/4095);
			lcd_data('V');
		
	delay_ms(100);	
		
	}
}