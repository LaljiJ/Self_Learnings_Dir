/*
understand logical operator
*/

#include<stdio.h>

int main(void){
    int num1 = 100,num2=0,res;

    res = num1 && num2;
    printf("res : %d\n",res);

    int num3 = 10 , num4 = 10;
    res = num1 || num2;
    printf("res : %d\n",res);

    int num5 = 10;
    res = !num5;
    printf("res : %d\n",res);
}