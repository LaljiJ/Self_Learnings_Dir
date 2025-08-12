/*
understand for loop
*/

#include<stdio.h>

int main(void){
    int number,option;
    printf("enter number and how many time you want to print\n");
    scanf("%d%d",&number,&option);

    int temp=0;
    for(temp = 0;temp < option;temp++){
        printf("number : %d\n",number);
    }
}