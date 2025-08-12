#include<stdio.h>
int prime(int);
main()
{
	int num,r;

	printf("Enter The Number....\n");
	scanf("%d",&num);

	r=prime(num);

	if(r==1)
	printf("Prime...\n");
	else
	printf("Not Prime...\n");

}

int prime(int num)

{
	int i;

	for(i=2;i<num;i++)
	{
		if(num%i==0)
		break;
	}
	if(num==i)
	return 1;
	else
	return 0;

}
