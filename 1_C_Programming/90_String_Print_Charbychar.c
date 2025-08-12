/*
WAP to print string character by character
*/

#include<stdio.h>

int main(void){

char str[20];
int i=0;

    printf("enter string\n");
    scanf("%[^\n]",str); // to scan a space %[^\n]

    for(i=0;str[i];i++){
    printf("str : %c\n",str[i]);
    }
}