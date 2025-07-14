/*
Undesratnd Pointer concepts
*/

#include<stdio.h>

int main(void){
char *cptr;
int *iptr;
float *fptr;
double *dptr;

    printf("cptr = %d\niptr = %d\nfptr = %d\ndptr = %d\n",sizeof(*cptr),sizeof(*iptr),sizeof(*fptr),sizeof(*dptr));
}