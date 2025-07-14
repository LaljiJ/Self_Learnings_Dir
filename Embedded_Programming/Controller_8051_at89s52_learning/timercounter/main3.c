#include <reg51.h>
#include "header.h"

void fun()
{
TMOD=0x0;
TH0=0x64;
TL0=0x06;
TR0=1;
while(TF0==0);

TR0=0;
TF0=0;	
}