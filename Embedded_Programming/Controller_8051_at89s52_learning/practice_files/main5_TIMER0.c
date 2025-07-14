#include "header.h"
#define LED 7


s32 c=0;
void main()
{
en_timer0_interrupt();
while(1)
{
	c++;
	io_write(PORT2,LED,CLEAR);
	io_write(PORT2,LED,SET);

}


}