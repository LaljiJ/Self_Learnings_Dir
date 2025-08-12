/*
Understand storage class
*/

#include <stdio.h>
auto int i = 10;

int main(void){
   
    printf("%d\n",i); 

    {
        i=20;
        printf("%d\n",i); 
    }

    printf("%d\n",i); 
}