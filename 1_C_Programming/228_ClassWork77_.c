#include<stdio.h>
union A
{
int i;
char c;
float f;
};
main()
{
int pos;
union A a1;

a1.f=23.5;

for(pos=31;pos>=0;pos--)
{
printf("%d|",a1.i>>pos&1);
}
printf("\n");
}
