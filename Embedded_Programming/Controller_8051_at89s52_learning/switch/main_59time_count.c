/* switch press count increment 59 time and roll over 0 */

#include "header.h" 
#define LED 0
#define SW 7
void main()
{
	u8 c=0;
	while(1)
	{
		for(c=0;c<59;)
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
	
}