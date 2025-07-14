/*
understand shift operator
*/

#include<stdio.h>

int main(void){
    int num=10;

    printf("befor num : %d\n",num);
    
    num = num>>2;
    printf("befor num : %d\n",num);

    num = 10;
    num = num << 2;
    printf("befor num : %d\n",num);

}