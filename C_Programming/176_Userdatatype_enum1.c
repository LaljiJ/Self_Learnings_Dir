/*
Understand enum concepts
*/

#include<stdio.h>

//prototype of enum declare
// enum is give a constant value to that varible
    // keyword tagname {varibale list};
enum std{
    one , //default value start with 0
    two,
    three,
    four,
    five
};

int main(void){

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