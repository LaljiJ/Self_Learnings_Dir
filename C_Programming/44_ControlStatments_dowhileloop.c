/*
Understand do while loop
*/

#include<stdio.h>

int main(void){

int num;
char ch;

do
{
    printf("Enter number\n");
    scanf("%d",&num);

    printf("You want to scan another number ?\n");
    scanf(" %c",&ch);

} while (ch == 'y' || ch == 'Y');

}