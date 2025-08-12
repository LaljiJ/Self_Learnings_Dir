/*
design function to swap two number
*/

#include<stdio.h>

void swap_number(int *,int *);

int main(void){

int num1,num2;

    printf("enter number\n");
    scanf("%d%d",&num1,&num2);

    swap_number(&num1,&num2);

    printf("After swap : \nnum1 : %d\nnum2 : %d\n",num1,num2);
}

void swap_number(int *num1,int *num2){

    int temp;
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
}