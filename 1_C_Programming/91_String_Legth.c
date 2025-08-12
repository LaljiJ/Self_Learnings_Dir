/*
WAP to find string length
*/

#include<stdio.h>

int main(void){

    char str[20];
    int i=0,count=0;

    printf("Enter string\n");
    scanf("%[^\n]",str);

    for(i=0;str[i];i++){
        count++;
    }

    printf("length : %d\n",count);
}