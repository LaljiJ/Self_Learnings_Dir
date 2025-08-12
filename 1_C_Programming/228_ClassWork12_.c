#include<stdio.h>
main()
{
int num;
char *p;

printf("enter num...\n");
scanf("%d",&num);

p=(char*)&num;
//p=p+1;
if(*p==num)
printf("litel..\n");
else
printf("big..\n");



}
