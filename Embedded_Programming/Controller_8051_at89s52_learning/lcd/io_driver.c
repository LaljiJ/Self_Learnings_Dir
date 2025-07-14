#include<reg51.h>
#include "header.h"

/********** delay generation **************/
void delay_ms(u16 ms)
{
	u8 i;
	for(;ms>0;ms--)
		{
			for(i=250;i>0;i--);
			for(i=247;i>0;i--);
		}
}

/********** port data write *************/
void io_write(u8 port,u8 pin,u8 val)
{
	switch(port)
	{
		case 0:if(val==1)
				P0|=(1<<pin);
				else
				P0&=~(1<<pin);
				break;
	
		case 1:if(val==1)
				P1|=(1<<pin);
				else
				P1&=~(1<<pin);
				break;

		case 2:if(val==1)
				P2|=(1<<pin);
				else
				P2&=~(1<<pin);
				break;

		case 3:if(val==1)
				P3|=(1<<pin);
				else
				P3&=~(1<<pin);
				break;
	}

}

 /********** port data read *************/
 u8 io_read(u8 port,u8 pin)
 {
 	u8 status;

 	 switch(port)
	 {
	 	case 0:status=(P0&(1<<pin))?1:0;
				break;

		case 1:status=(P1&(1<<pin))?1:0;
				break;

	  	case 2:status=(P2&(1<<pin))?1:0;
				break;

		case 3:status=(P3&(1<<pin))?1:0;
				break;
	 }
 
  return status;
 }