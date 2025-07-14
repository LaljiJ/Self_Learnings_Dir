/*
swap two number using only two variable
*/

#include<stdio.h>

int main(void){
int num1,num2;

printf("enter number\n");
scanf("%d%d",&num1,&num2);

    num1 = num1+num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    /*
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;
    */
  
printf("num1 : %d\nnum2 : %d\n",num1,num2);
}
