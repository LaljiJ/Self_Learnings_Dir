/*
WAP to print element in 3 diffrent modes
*/

#include<stdio.h>

int main(void){

    int arr[5] = {10,20,30,40,50},i;


    for(i=0;i<5;i++){
        printf("arr[i] : %d | i[arr] : %d | *(arr+1) : %d",arr[i],i[arr],*(arr+1));
        printf("\n");
    }
}