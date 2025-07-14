/* 2 row 0 & row 1 rotate string right side to left*/

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
		lcd_cmd(0x8F-i);
		lcd_string("*PAPA*");
		//delay_ms(800);
		//lcd_cmd(0x1);			
		lcd_cmd(0xCF-i);
		lcd_string("*MUMMY*");
		delay_ms(800);
		lcd_cmd(0x1);		
		}
				
	}

}
