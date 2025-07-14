/* keypad 4*4 matrix */ 

#include "header.h"
void main()
{
	s16	t;
	lcd_init();
		while(1)
		{
		t=key_scan();
		//lcd_data(t+48);
		lcd_integer(t);
		}

}