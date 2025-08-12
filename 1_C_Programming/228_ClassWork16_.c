#include<stdio.h>
main()
{
int i=10;
const int *p;
int *q;

p=q=&i;

printf("%d %d %d\n",i,*p,*q);

//*p=100 error

*q=100;

printf("%d %d %d\n",i,*p,*q);


}
