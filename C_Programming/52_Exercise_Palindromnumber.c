/*
WAP given number is palindrom or not
Exa: 153 after revers 153 then palindrom
    121 is palindrom
*/

#include<stdio.h>

int main(){

int num=0,num2=0,digit=0;

printf("enter digit\n");
scanf("%d",&num);

	for(num2=num;num;num=num/10)
	{
		digit = (digit*10) + (num%10);
	}
	
	if(num2 == digit)
	{
		printf("palindrom\n");
	}
	else{
	printf("not palindrome\n");
    }

}