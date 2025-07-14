/*
swap two number only in one line
*/

#include<stdio.h>

int main(void){
int num1,num2;

printf("enter number\n");
scanf("%d%d",&num1,&num2);

num2 = (num1 + num2) - (num1=num2);
  
printf("num1 : %d\nnum2 : %d\n",num1,num2);
}
