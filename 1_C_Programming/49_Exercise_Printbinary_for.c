/*
WAP to display binary of given number.
*/

#include<stdio.h>

int main(void){

    int num,pos;

    printf("enter number\n");
    scanf("%d",&num);

    for(pos=31;pos>=0;pos--){
        printf("%d ",(num>>pos)&1);
    }
    printf("\n");
}