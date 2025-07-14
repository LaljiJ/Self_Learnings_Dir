#include <reg51.h>
#include "header.h"

 u32 c=0;
s32 c1,c2;
void main()
{
	
 	en_ext_interrupt();
	en_ext1_interrupt();
	while(1)
	{	
		INT0=1;
		INT1=1;
		delay_ms(50);
		INT0=0;
		INT1=0;
		//delay_ms(50);
		c++;
	}

}
