#include<stdio.h>
main()
{
int i=10;
int const *p;

p=&i;
*p=100;

printf("%d",*p);


}
