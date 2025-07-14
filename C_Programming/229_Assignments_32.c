#include<stdio.h>
int revers(int);
main()
{
int num,total;

printf("enter numbr...\n");
scanf("%d",&num);

total=revers(num);
printf("%d\n",total);

}
int revers(int num)
{
static int sum=0;

	if(num)
	{
	sum=sum*10+num%10;
	num=num/10;
	revers(num);
	}
else
return sum;

}
