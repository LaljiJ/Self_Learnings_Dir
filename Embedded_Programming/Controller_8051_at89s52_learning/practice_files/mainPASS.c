#include "header.h"
void main()
{
	u8 pass[10]="123",arry[10],temp,i,c=0;

	lcd_init();
	lcd_cmd(0xC);
	
while(1)
{	
 		lcd_cmd(0x80);
 		lcd_string("Enter Pass:");
			
			for(i=0;i<3;i++)
			{
				temp=key_scan();
 				arry[i]=temp;
				lcd_cmd(0xC0+i);
				lcd_data(temp);
				delay_ms(200);
			}
			arry[i]='\0';
			
			for(i=0;arry[i];i++)
			{
					if(arry[i]!=pass[i])
						break;
			}	
			
			if(arry[i]==pass[i])
			{
					lcd_cmd(0xC0);
					lcd_string("CORRECT PASS");
					delay_ms(2000);
					lcd_cmd(0x1);
					lcd_cmd(0x80);
					lcd_string("Welcom in:");
					delay_ms(2000);
					//lcd_cmd(0xC0);
						for(i=0;i<16;i++)
						{
							lcd_cmd(0x80);
							lcd_string("Welcom in:");
							lcd_cmd(0xC0+i);
							lcd_string("VECTOR");
							delay_ms(300);
							lcd_cmd(0x1);
						}
				break;
			}	
			else 
			{
				c++;
				lcd_cmd(0xC0);
				lcd_string("WRONG PASS");
				delay_ms(1000);
				lcd_cmd(0x1);
				lcd_cmd(0x80);
				lcd_string("Try One Time:");
				delay_ms(300);
				lcd_cmd(0x1);
				if(c==2)
				{
					lcd_cmd(0x80);
					lcd_string("Sorry 2 Try Fail");
					delay_ms(1000);
					lcd_cmd(0x1);
					lcd_cmd(0x80);
					lcd_string("Wait For 5Sec");
					delay_ms(1000);
					//break;
				}
			}
	
if(c==2)
{
		delay_ms(200);
		//lcd_cmd(0x1);
		for(i=1;i<=5;i++)
		{
			lcd_cmd(0x1);
			lcd_cmd(0x82);
			lcd_data(i/10+48);
	 		lcd_data(i%10+48);
			delay_ms(1000);
		}
}


			
}  // while loop close


lcd_cmd(0x1);
lcd_cmd(0X80);
lcd_string("THANK YOU!");

while(1);
} // main close