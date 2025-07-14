/*
Understand funcion concepts
*/
void function(void); //function prototype

#include<stdio.h>

int main(void){

    // function call
    function(); // whatever  argument pass here its called a actual argument
}

//function declaration
void function(void){ // whatever name catch here called a formal argument
    printf("In function\n");
}

//void is called a return type here alse write int,char,etc.
// argument may be one and more like int temp1,char temp2,etc...