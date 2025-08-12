#include<stdio.h>
main()
{
int num,i;

printf("enter nummer..\n");
scanf("%d",&num);

for(i=2;i<num;i++)
{
if(num%i==0)
break;
}
if(num==i)
printf("prime\n");
else
printf("not prime\n");




}
