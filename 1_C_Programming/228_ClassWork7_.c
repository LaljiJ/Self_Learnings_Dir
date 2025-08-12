#include<stdio.h>
main()
{
int a[6]={10,20,30,40,50,60};
int (*p)[5],i,ele;

p=&a;

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
printf("%d ",(*p));




}
