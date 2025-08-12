/*
WAP to find even or odd number
*/

#include<stdio.h>

int main(void){

int num;

printf("enter number\n");
scanf("%d",&num);

num%2 ? printf("odd\n"):printf("even\n");

}