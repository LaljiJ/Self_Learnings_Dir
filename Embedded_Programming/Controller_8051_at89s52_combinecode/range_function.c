#include <reg51.h>
#include "header.h"


sfr16 DPTR=0x82;
sbit trig=P2^1;
sbit echo=P2^0;
#define led1 5

/*----------------- Range Detect Function ---------------------*/
void range_detect()
{


		u16 range=0;
		TMOD|=0x1;	
		TH0=TL0=0;
		TR0=1;
		P2|=0x1;
	
		range=ultra_sonic();
		
		lcd_cmd(0x1);
		lcd_string("DIST:-");
		lcd_integer(range);
		lcd_string(" cm");

		if(range<15)
		{
		
		 io_write(PORT2,led1,SET);
			lcd_cmd(0xC0);
		 lcd_string("Stop...Stop...");
		 delay_ms(100);
		 io_write(PORT2,led1,CLEAR);
		 delay_ms(100);
		 
	 
		}
		
		if(range>15 && range<35)
		{

		 io_write(PORT2,led1,SET);
		 delay_ms(500);
		 io_write(PORT2,led1,CLEAR);
		 delay_ms(500);
		 	 
		
		}	

		if(range>35)
		{
			
		 io_write(PORT2,led1,SET);
		 delay_ms(1000);
		 io_write(PORT2,led1,CLEAR);
		 delay_ms(1000);
			   
		}

}





/*------------------------ Ultra Sonic Value ------------------------------*/
u8 ultra_sonic()
{
u8 dist;

send_pulse();

	while(echo==0);

	while(echo==1);

		DPH=TH0;
		DPL=TL0;

	TH0=TL0=0xff;

			if(DPTR<38000)
			dist=DPTR/59;
			else
			dist=0;

return dist;

}





/*-------------------- Send 10Micro Sec Delay ----------------------*/
void send_pulse()
{
	u8 i;

		TH0=TL0=0;

		trig=1;
		for(i=0;i<3;i++);
		trig=0;
	
}









