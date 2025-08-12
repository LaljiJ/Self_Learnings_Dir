/*
swap two number
*/

#include<stdio.h>

int main(void){
int num1,num2,temp;

printf("enter number\n");
scanf("%d%d",&num1,&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    
printf("num1 : %d\nnum2 : %d\n",num1,num2);
}
