/*
WAP to prove we are working on which endian little or big
*/

#include<stdio.h>

int main(void){
int i= 10;
char *cptr;

cptr = (char*)&i;

    if(*cptr == 10){
        printf("little endian\n");
    }
    else{
        printf("Big endian\n");
    }

}