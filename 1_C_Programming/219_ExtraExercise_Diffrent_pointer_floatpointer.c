/*
WAP to diffrent between intpointer and floatpointer
*/

#include<stdio.h>

int main(void){
float f= 23.5;
float *fptr;
int *iptr;

fptr = &f;
iptr = &f;

printf("fptr value : %f\niptr value : %d\n",*fptr,*iptr);

}