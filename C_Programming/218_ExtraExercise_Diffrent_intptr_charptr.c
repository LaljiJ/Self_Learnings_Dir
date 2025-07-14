/*
WAP to diffrent between int and char pointer
*/

#include<stdio.h>

int main(void){
int i= 258;
int *iptr;
char *cptr;

iptr = &i;
cptr = (char*)&i;

printf("iptr value : %d\ncptr value : %d\n",*iptr,*cptr);

}