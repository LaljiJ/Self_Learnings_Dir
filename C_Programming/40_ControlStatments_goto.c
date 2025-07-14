/*
understand goto statment
*/

#include<stdio.h>

int main(void){
int num=10;

    goto Label1;
    printf("1\n");
    printf("2\n");
    Label1:
    printf("3\n");
    printf("4\n");
    //goto Label1;

}