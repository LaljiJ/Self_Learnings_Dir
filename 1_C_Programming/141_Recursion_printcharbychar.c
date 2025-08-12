/*
WAP to print string char by char using recursion
*/

#include<stdio.h>

void prin_string_char(char *);

int main(void){
    char str[] = "laljijoshi";
    
    prin_string_char(str);
}

void prin_string_char(char *str){

    if(*str){
        printf("%c\n",*str);
        prin_string_char(str+1);
    }

}