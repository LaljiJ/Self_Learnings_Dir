/* switch press count increse */


#include "header.h" 
#define LED 0
#define SW 7
void main()
{
	u8 c=0;
	while(1)
	{
		if(io_read(PORT2,SW)==0)
		{
		c++;
		io_write(PORT2,LED,CLEAR);
		while(io_read(PORT2,SW)==0);		
		}
		else
		io_write(PORT2,LED,SET);
		
	}
	
}