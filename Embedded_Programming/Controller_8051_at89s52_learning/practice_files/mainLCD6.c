/* display the integer valu 1 to 59 */

#include "header.h"
void main()
{	
u8 c=0;

lcd_init();

	while(1)
	 {
	  	for(c=0;c<=60;c++)
		{	
			lcd_cmd(0x80);
			lcd_data(c/10+48);
	 		lcd_data(c%10+48);
			delay_ms(700);
		}
	 
	 }


}