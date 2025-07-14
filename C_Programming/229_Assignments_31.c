#include<stdio.h>
int sum_digit(int);
main()
{
	int num,total;

	printf("enter num..\n");
	scanf("%d",&num);

	total=sum_digit(num);
	printf("%d\n",total);

}
int sum_digit(int num)
{
	static int sum=0;
	int k;

	if(num)
	{
		k=num%10;
		sum=sum+k;
		num=num/10;
		sum_digit(num);
	}
	else
		return sum;
}
