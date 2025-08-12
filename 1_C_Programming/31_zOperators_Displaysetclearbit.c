/*
Display bit set or clear
*/

#include<stdio.h>

int main(void){
int num,pos;
short int checkbit;

printf("Enter number and position\n");
scanf("%d%d",&num,&pos);

    checkbit = (num>>pos)&1;

    checkbit ? printf("Bit set 1\n"):printf("Bit not set 0\n");

}