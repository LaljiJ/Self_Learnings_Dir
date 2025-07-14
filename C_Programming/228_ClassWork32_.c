#include<stdio.h>
int count(int);
main()
{
	int num,r;
	printf("enter the number...\n");
	scanf("%d",&num);

	r=count(num);
	printf("set bit is=%d",r);
	printf("\n");
}
int count(int num)
{
	int pos,c;

	for(pos=0,c=0;pos<=31;pos++)
	{
		if(num&1<<pos)
			c++;
	}
	return c;

}
