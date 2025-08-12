/*
Understand funcion concepts pas multiple diffrent argument
*/
int function(char,int,float); //function prototype

#include<stdio.h>

int main(void){

    // function call
    function('a',10,23.5); // whatever  argument pass here its called a actual argument
}

//function declaration
int function(char temp1,int temp2,float temp3){ // whatever name catch here called a formal argument
    printf("In function\n");

    printf("temp1 : %c\ntemp2 : %d\ntemp3 : %f",temp1,temp2,temp3);

    printf("\n");
}

//void is called a return type here alse write int,char,etc.
// argument may be one and more like int temp1,char temp2,etc...