/*
WAP to print binary of number using recursion
*/

#include<stdio.h>

void print_binary(int);

int main(void){

    int num;

    printf("enter number\n");
    scanf("%d",&num);

    print_binary(num);

    printf("\n");
}

void print_binary(int num){

    static int pos=31;

    if(pos >= 0){
        printf("%d ",num>>pos&1);
        pos--;
        print_binary(num);
    }
}