/*
WAP to revers digit of given number
Exa: 123
output : 321
*/
#include<stdio.h>

int main(){

int num=0,digit=0;

printf("enter digit\n");
scanf("%d",&num);

	for(num;num;num=num/10)
	{
		digit = (digit*10) + (num%10);
	}
printf("digit total : %d\n",digit);
}