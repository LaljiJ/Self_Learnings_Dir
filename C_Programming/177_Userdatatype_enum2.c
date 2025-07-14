/*
Understand enum concepts
*/

#include<stdio.h>

//prototype of enum declare
// enum is give a constant value to that varible
    // keyword tagname {varibale list};
enum std{
    one , //default value start with 0
    two = 5, // if we assign a 5 after next variblae value is 6,7,....
    three,
    four = 100,
    five
};

int main(void){

//create enum variable
    enum std tempvar;

    tempvar = one;
    printf("one : %d\n",tempvar);

    tempvar = two;
     printf("two : %d\n",tempvar);
    
    tempvar = three;
    printf("three : %d\n",tempvar);
    
    tempvar = four;
    printf("four : %d\n",tempvar);
    
    tempvar = five;
    printf("five : %d\n",tempvar);

}