/*
WAP to enum is a days ans print the value
*/
#include<stdio.h>

enum days{
    mon,tus,wens,thur,fri,satu,sund
};

int main(void){

    enum days todays;

    todays = sund;
    if(todays == sund){
        printf("true\n");
    }
    else{
        printf("flase\n");
    }
}