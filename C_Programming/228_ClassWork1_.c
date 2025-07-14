#include<stdio.h>
main()
{

int i=258;
int *p;
char *q;

p=&i;
q=(char*)&i;

printf("%p\n",&i);
printf("%p  %p\n",p,q);
printf("%p  %p",p+1,q+1);




}
