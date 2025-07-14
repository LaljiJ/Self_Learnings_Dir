#include<stdio.h>
main()
{
int i=10,pos;
int *p;

p=&i;

for(pos=31;pos>=0;pos--)
printf("%d",*p>>pos&1);


printf("\n");
}



