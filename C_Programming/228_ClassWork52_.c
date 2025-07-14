#include<stdio.h>
main()
{

int num,i,c;

printf("enter number\n");
scanf("%d",&num);

for(i=1,c=0;i<=num;i++)
{
if(num%i==0)
c++;
}
printf("count=%d\n",c);
if(c==2)
printf("its prime number\n");
else
printf("not prime\n");


}
