/* rotate string right side */

#include "header.h"
void main()
{
	u8 i;
	lcd_init();
	lcd_cmd(0xC);
	while(1)
	{  
	
		for(i=0;i<16;i++)
		{
		lcd_cmd(0x80+i);
		lcd_string("CONGO SAGAR-VMP");
		delay_ms(800);
		lcd_cmd(0x1);			
		}
		
	}

}
