#include<stdio.h>
int my_fact(int);
main()
{
int num,to;

printf("enter the numbe...\n");
scanf("%d",&num);

to=my_fact(num);
printf("%d\n",to);

}
int my_fact(int num)
{
	if(num)
	{
	return num*my_fact(num-1);
	}
	else 
	return 1;
}
