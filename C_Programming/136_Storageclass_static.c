/*
Understand storage class
*/

#include <stdio.h>

void function(void);

int main(void){
    
function();
function();
function();

}

void function(void){

 static int i = 10; // static keyword reinitialization note done
 i++;
 printf("i = %d\n",i);

}