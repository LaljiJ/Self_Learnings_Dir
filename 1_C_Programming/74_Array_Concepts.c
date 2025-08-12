/*
Understand array concepts
*/

#include<stdio.h>

int main(void){

// declare array
    int arr[5];

// intialize array
    int arr2[3] = {1,2,3};
    int size,i;

    // scan array and print
    size = sizeof(arr)/sizeof(arr[0]);

    for(i = 0 ; i < size ;i++){
        scanf("%d",&arr[i]);
    }

        for(i = 0 ; i < size ;i++){
        printf("arr[%d] : %d\n",i,arr[i]);
    }

}