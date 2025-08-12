/*
WAP to set a bit
*/

#include<stdio.h>

int main(void){

int num,pos;

printf("enter number and postition\n");
scanf("%d%d",&num,&pos);

num = (num|(1<<pos));

printf("number : %d\n",num);

}