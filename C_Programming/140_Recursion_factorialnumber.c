/*
WAP to find fectrorial of number using recursion
*/

#include<stdio.h>

int factorial(int);

int main(void){

int num,r;
    printf("enter number\n");
    scanf("%d",&num);

    r = factorial(num);

    printf("r : %d\n",r);
}

int factorial(int num){
    
    if(num){
        return num * factorial(num-1);    
    }
    else{
        return 1;
    }

}