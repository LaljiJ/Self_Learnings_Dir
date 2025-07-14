#include <reg51.h>
#include "header.h"
//sbit LED=P3^7;
//sbit LED2=P3^6;
extern s32 c1,c2;


void INT0_Handlere(void) interrupt 0
{
	
	c1++;//LED=~LED;

}


void en_ext_interrupt()
{
	
	EA=EX0=1;
	//IT0=0; // level0 triggerd
	IT0=1; // edge trigerd

}



void INT1_Handlere(void) interrupt 2
{
	
	c2++;//LED2=~LED2;

}
void en_ext1_interrupt()
{
	EA=EX1=1;
	//IT0=0; // level0 triggerd
	IT1=1; // edge trigerd


}