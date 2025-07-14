#include "header.h"
#define SW1 7 // p2.7 count increment
#define SW2 6 // p2.6 chek prime or not 
#define LED 0 // p2.0 ledconnect
void main()
{

u8 c;
lcd_init();
lcd_cmd(0xC);
	
while(1)
{
		 lcd_cmd(0x80);
		 lcd_integer(0);
		 
   	for(c=0;c<=59;)
		{
			if(io_read(PORT2,SW1)==0)
			{
				delay_ms(200);
				c++;
				lcd_cmd(0x80);
				lcd_integer(c);
				while(io_read(PORT2,SW1)==0);	
			}
			
			if(io_read(PORT2,SW2)==0)
			{
				lcd_binary(c);
			}	
		}
		
		lcd_cmd(0x1);
		
} // while close

} // main close

