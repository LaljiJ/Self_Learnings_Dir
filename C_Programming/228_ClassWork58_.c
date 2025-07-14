#include<stdio.h>
main()
{

int num,rev,num1;

printf("enter number..\n");
scanf("%d",&num);

for(rev=0,num1=num;num1;num1=num1/10)
rev=rev*10+num1%10;
printf("num=%d\nrev=%d\n",num,rev);




}
