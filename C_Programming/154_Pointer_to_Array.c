/*
Understand pointer to array concepts
*/

#include<stdio.h>

int main(void){

    // declare pointer to array
    // prototype : datatype (*variablename)[element];

    int arr[5] = {10,20,30,40,50};
    int *ptr;
    int (*ptr_pointer)[5];

    ptr = arr;
    ptr_pointer = arr;

    printf("%u  %u\n",ptr,*ptr);
    printf("%u  %u  %u\n",ptr_pointer,*ptr_pointer,**ptr_pointer);
    
    printf("%d  %d  %d\n",(*ptr_pointer)[0],(*ptr_pointer)[1],(*ptr_pointer)[2]);
    printf("%d  %d  %d\n",ptr_pointer[0][0],ptr_pointer[0][1],ptr_pointer[1][2]);
    
}