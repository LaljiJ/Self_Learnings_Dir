/* switch on off */

#include "header.h" 
#define LED 0
#define SW 7
void main()
{
	while(1)
	{
		if(io_read(PORT2,SW)==0)
		{
		io_write(PORT2,LED,CLEAR);
			
		}
		else
		io_write(PORT2,LED,SET);
		
	}
	 
}