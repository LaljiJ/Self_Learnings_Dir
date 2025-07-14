#include <reg51.h>
void main()
{
 TMOD=0x0;
 TH0=0xE0;
 TL0=0x18;
 TR0=1;
 while(TF0==0);
 TR0=0;
 TF0=0;


while(1);
}