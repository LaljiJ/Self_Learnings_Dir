/*
Understand 2D array print 2D array element string
scan 5 string and print on screen
*/

#include<stdio.h>

int main(void){

    // declare 2D array
    // prototype : datatype variblename[row][colum];
    char str[5][10];
    int i,ele;

    ele = sizeof(str)/sizeof(str[0]);

    printf("Enter string\n");
    for(i=0;i<ele;i++)
    scanf("%s",str[i]);


    printf("print string\n");
    for(i=0;i<ele;i++){
    printf("%s",str[i]);
    printf("\n");    
    }

printf("\n");
}
