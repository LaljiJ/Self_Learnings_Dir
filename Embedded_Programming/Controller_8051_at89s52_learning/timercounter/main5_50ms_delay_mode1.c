/* 1sec delay using timer0 and mode1 */

#include <reg51.h>
#include "header.h"

void fun()
{
TMOD=0x01;
//TH0=0x02;
//TL0=0x17;
TH0=15520>>8;
TL0=15520;
	
	TR0=1;
while(TF0==0);
	
TR0=0;
TF0=0;
	
}
