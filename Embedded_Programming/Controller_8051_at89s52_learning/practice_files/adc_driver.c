#include <reg51.h>
#include "header.h"

sbit clk=P1^0;
sbit dout=P1^1; // mosi master out slave in
sbit din=P1^2; // 12 bit read
sbit cs=P1^3;


u16 adc_read()
{
u16 TEMP3=0x0;
s8 i;

	cs=0;
	clk=0; 	din=1;		clk=1;
	clk=0; 	din=1;		clk=1;
	clk=0; 	din=1;		clk=1;
	clk=0; 	din=0;		clk=1;
	clk=0; 	din=0;		clk=1;
	clk=0; 	din=1;		clk=1;
	clk=0; 	din=1;		clk=1;
	
	for(i=11;i>=0;i--)
	{
		clk=0;		
				if(dout==1)
				TEMP3|=(1<<i);		
		clk=1;
	}
	
cs=1;	


return TEMP3;

}
