#include<stdio.h>
int fibo(int);
main()
{
int num,r;

printf("enter numm..\n");
scanf("%d",&num);

fibo(num);
printf("\n");
//printf("%d ",num);
}
int fibo(int num)
{
static int a=-1,b=1,i=0,sum=0;
	
	if(i<=num)
	{
	sum=a+b;
	printf("%d ",sum);
	a=b;
	b=sum;
	i++;
	fibo(num);
	}
	//return sum;
}
