/*
WAP to add digit number
Exa: 123
    1 + 2 + 3 = 6
*/
#include<stdio.h>

int main(){

int num=0,digit=0;

printf("enter digit\n");
scanf("%d",&num);

	for(num;num!=0;num=num/10)
	{
		digit = (digit+(num%10));
	}
printf("digit total : %d\n",digit);
}