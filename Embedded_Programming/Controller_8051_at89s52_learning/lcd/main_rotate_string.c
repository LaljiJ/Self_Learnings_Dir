/* rotate string */

#include "header.h"
void main()
{
	u8 i;
	lcd_init();
	while(1)
	{
		for(i=0;i<16;i++)
		{
		lcd_cmd(0x80+i);
		lcd_string("Lalji Joshi");
		delay_ms(800);
		lcd_cmd(0x1);	
			if(i==15)
			i=0;
		}
		
	}

}