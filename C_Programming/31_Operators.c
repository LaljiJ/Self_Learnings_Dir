/*
understand pre post operator
*/

#include<stdio.h>

int main(void){
int num=10;

    ++num;
    printf("preincrement : %d\n",num);

    num++;
    printf("post increment : %d\n",num);

    --num;
    printf("predecrement : %d\n",num);

    num--;
    printf("post decrement : %d\n",num);
}