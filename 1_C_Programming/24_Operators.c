/*
understand relatnol operator
*/

#include<stdio.h>

int main(void){
int num1,num2,result;

printf("enter number\n");

result = num1 < num2;
printf("result : %d\n",result);

result = num1 + 20 > num2;
printf("result : %d\n",result);

result = num1 + (20 >num2);
printf("result : %d\n",result);

result = num1 < 20 < num2;
printf("result : %d\n",result);

printf("num1 : %d num2 : %d result : %d\n",num1,num2,result);

}
