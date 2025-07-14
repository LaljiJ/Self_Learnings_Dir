 /* uart_driver.c */


#include <reg51.h>
#include "header.h"


/*********** Uart Initializ **************/
void uart_init(s16 BAUD)
{

SCON|=0x50; 
TMOD|=0x20;

	switch(BAUD)
	{
		case 4800:	TH1=250;
					break;
			
		case 7200:TH1=252;
					break;
		
		case 9600:TH1=253;
					break;

		case 14400:TH1=254;
					break;
		
		case 28800:TH1=255;
					break;

		case 57600:TH1=255;
					PCON=0x80;
					break;
		
	}

 TR1=1;

}



/*********** Uart Transmiting data **************/
void uart_tx(u8 CH)
{

SBUF=CH;
	while(TI==0);
	TI=0;

}



/*********** Uart Reciving data **************/
u8 uart_rx()
{

   while(RI==0);
	RI=0;

return SBUF;

}


/*********** Uart Transmiting String **************/
void uart_tx_string(u8 *US)
{

	while(*US)
	{
		uart_tx(*US++);
	}
	
}
