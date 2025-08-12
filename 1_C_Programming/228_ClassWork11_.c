#include<stdio.h>
main()
{
int i=300;
int *p;
char *q;

p=&i;
q=(char*)&i;
//*q=2;
//q=q+1;
printf("%d   %d\n",*p,*q);




}
