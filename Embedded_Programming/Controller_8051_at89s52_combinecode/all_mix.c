#include "header.h"

s8 flag1,flag2;
s8 c=0,c2=0;

void initialize_all()
{
	lcd_init();
	en_ext0_interrupt();
	en_ext1_interrupt();
	en_timer0_interrupt();	
	uart_init(9600);
	lcd_string("KEY TO START...");
}


void function_all()
{


		if(flag1==1)
		{	
			c++;
						if(c==1)
						{
							start_car();	
						}					
		alcohole_check();
		delay_ms(200);
		}	
			
			  
		 	 if(flag2%2!=0)
			 {
				c2++;

					if(c2==1)
					revers_car();	

				while(flag2%2!=0)
		  	 	range_detect();
		  	 
			 }
		  	  

}