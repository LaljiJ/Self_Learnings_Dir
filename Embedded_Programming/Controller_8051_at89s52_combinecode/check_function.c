/* check_function.c */

#include <reg51.h>
#include "header.h"

#define led1 5
#define led0 4
#define led2 7
#define led3 6
s8 pwm;




 /*------------------------- Start Car -------------------------------*/
void start_car()
{
		
		io_write(PORT2,led0,CLEAR);
		lcd_cmd(0x1);
		lcd_string("*START CAR*");
		delay_ms(200);
}



 /*----------------------- Detection Check ------------------------------*/
void alcohole_check()
{
	u32 temp,temp2;

	
				lcd_cmd(0x1);
				temp=adc_read_POTE();
				lcd_string("P:-");
				lcd_integer(temp);
				lcd_cmd(0x89);
				lcd_string("L:-");
				temp2=adc_read_LDR();
				lcd_integer(temp2);
	
				pwm=temp2*0.062;
	
					if(temp>1500)
					{
						
						lcd_cmd(0xC0);
						lcd_string("DETECTED...");
						uart_tx_string("PERSONE DETECTED ALCOHOLE\r\n");
						uart_tx_string("STOP CAR\r\n");
						uart_tx_string("CAR IS STOP\r\n" );
						uart_tx_string("COMPLETED......\r\n");
						stop_car();		
					}
					else
					{
						lcd_cmd(0xC0);
						lcd_string("NOT DETECTED...");
					}
					
				
}




/*------------------------Stop Car -----------------------------*/
void stop_car()
{
  		io_write(PORT2,led0,SET);
		io_write(PORT2,led1,SET);
		io_write(PORT2,led2,SET);
		io_write(PORT2,led3,SET);
		lcd_cmd(0x1);
		lcd_string("*STOP CAR*");
	
		EA=0;
while(1);
}



/*---------------------- Revers Car -----------------------------*/
void revers_car()
{

		io_write(PORT2,led1,CLEAR);
		lcd_cmd(0x1);
		lcd_string("*REVERS CAR*");
		delay_ms(200);

}







