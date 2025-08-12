/*
Scan a string and print on the screen
*/

#include<stdio.h>

int main(void){

char str[20];

    printf("enter string\n");
    scanf("%[^\n]",str); // to scan a space %[^\n]

    printf("str : %s\n",str);

}