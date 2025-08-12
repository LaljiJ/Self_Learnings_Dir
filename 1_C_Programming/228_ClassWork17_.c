#include<stdio.h>
main()
{
int i=10;
int *p;
char *q;

p=&i;
q=(char*)&i;

printf("%p\n",&i);
printf("%p %p\n",p,q);
printf("%p %p\n",p+1,q+3);1



}
