/*
Understand array of pointer concepts
*/

#include<stdio.h>

int main(void){

//declare array of pointer prototype
    // datatype *variblename[element];

    int i = 10,j=20,k=30,l=40;
    int *ptr[4];

    ptr[0] = &i;
    ptr[1] = &j;
    ptr[2] = &k;
    ptr[3] = &l;

    printf("%d  %d  %d  %d  \n",*ptr[0],*ptr[1],*ptr[2],*ptr[3]);

    printf("%d  %d  %d  %d  \n",ptr[0][0],ptr[1][0],ptr[2][0],ptr[3][0]);
}