
#include "header.h"
#define SW1 7 // p2.7 count increment
#define SW2 6 // p2.6 chek prime or not 
#define LED 0 // p2.0 ledconnect
void main()
{

u8 c,i,j=0,c2;
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
				c2=c;
				lcd_cmd(0x80);
				lcd_integer(c);
				while(io_read(PORT2,SW1)==0);	
			}
			/*****/
			if(io_read(PORT2,SW2)==0)
			{
				for(i=2;i<c;i++)
				{
					if(c%i==0)
					break;
				}
				if(c==i)
				{	
					io_write(PORT2,LED,CLEAR);
					lcd_cmd(0xC0);
					lcd_string("YES PRIME");
					
					
					/*for(j=0;j<5;j++) // blink LED 5 times
					{
						io_write(PORT2,LED,CLEAR);
						lcd_cmd(0xC0);
						lcd_string("YES PRIME");
						delay_ms(800);
						io_write(PORT2,LED,SET);
						delay_ms(800);
					}*/
				
					
			
					/*while(c2) // prime number times blink LED
					{
						io_write(PORT2,LED,CLEAR);
						lcd_cmd(0xC0);
						lcd_string("YES PRIME");
						delay_ms(800);
						io_write(PORT2,LED,SET);
						delay_ms(800);
						c2--;
					}*/
					
				}
				else
				{
					io_write(PORT2,LED,SET);
					lcd_cmd(0xC0);
					lcd_string("NOT PRIME");
				}

			} //prime chek if condition
			
		
		} // count increment for loop
   
   lcd_cmd(0x1);
   } // while loop 

} // main close