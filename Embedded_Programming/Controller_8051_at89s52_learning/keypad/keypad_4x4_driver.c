#include <reg51.h>
#include "header.h"
sbit R0=P2^0;
sbit R1=P2^1;
sbit R2=P2^2;
sbit R3=P2^3;
sbit C0=P2^4;
sbit C1=P2^5;
sbit C2=P2^6;
sbit C3=P2^7;

//code u8 ARRY[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
u8 key_scan()
{
u8 ROW,COL;
code u8 ARRY[4][4]={'1','2','3','A','4','5','6','B','7','8','9','C','#','0','@','D'};


R0=R1=R2=R3=0;
C0=C1=C2=C3=1;

while((C0&C1&C2&C3)==1);  
delay_ms(50);								

R0=0;
R1=R2=R3=1;
if((C0&C1&C2&C3)==0)
{
	ROW=0;
	goto COLCHEK;
	
}
/*------*/
R1=0;
R0=R2=R3=1;
if((C0&C1&C2&C3)==0)
{
	ROW=1;
	goto COLCHEK;
	
}
/*------*/

R2=0;
R1=R0=R3=1;
if((C0&C1&C2&C3)==0)
{
	ROW=2;
	goto COLCHEK;
	
}

/*------*/

R3=0;
R1=R2=R0=1;
if((C0&C1&C2&C3)==0)
{
	ROW=3;
	goto COLCHEK;
	
}


COLCHEK:
				if(C0==0)
				{
					COL=0;
				}
				else if(C1==0)
				{
					COL=1;
				}
				else if(C2==0)
				{
					COL=2;
				}
				else if(C3==0)
				{
					COL=3;
				}
				
	while((C0&C1&C2&C3)==0); 			

return ARRY[ROW][COL];
}