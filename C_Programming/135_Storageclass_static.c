/*
Understand storage class
*/

#include <stdio.h>

int main(void){
    
    static int i=0;
    printf("%d\n",i); 

    i = 10;
    printf("%d\n",i); 

    i = 20;
    printf("%d\n",i); 

}