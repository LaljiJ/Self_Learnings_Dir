/*
WAP to print binary using pointer
*/

#include<stdio.h>

int main(void){
int num;
int *ptr;

    printf("enter num\n");
    scanf("%d",&num);
    
    ptr = &num;
int pos;

    for(pos = 31;pos >= 0 ; pos--){
        printf("%d ",(*ptr>>pos)&1);
    }
printf("\n");
}