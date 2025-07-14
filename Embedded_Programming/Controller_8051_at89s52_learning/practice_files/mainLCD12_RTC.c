
#include "header.h"
void main()
{
u8 hr,min,sec;

	lcd_init();
	
	
   while(1)
   {
   		for(hr=0;hr<24;hr++)
		{
		 	lcd_cmd(0x80);
			lcd_data(hr/10+48);
			lcd_data(hr%10+48);
			lcd_data(':');
				for(min=0;min<=59;min++)
				{
					lcd_cmd(0x83);
					lcd_data(min/10+48);
					lcd_data(min%10+48);
					lcd_data(':');
						for(sec=0;sec<=59;sec++)
						{
							lcd_cmd(0x86);
							lcd_data(sec/10+48);
							lcd_data(sec%10+48);
							 delay_ms(1000);
						}
										
				}

		}		
   		
   
   
   
   }


}