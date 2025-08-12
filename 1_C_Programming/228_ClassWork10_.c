#include<stdio.h>
main()
{
int i=10;
int *p;
p=&i;

*p=100;

printf("%d %d \n",i,*p+2);




}
