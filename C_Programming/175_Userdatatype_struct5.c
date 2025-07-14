/*
Understand structure bit feild concepts
*/

#include<stdio.h>

struct A{
    char ch;
    int i;
    float f;

    //prototype declrae stucture bit feild
        // prototype : datatype variblename:bit;
    unsigned int varbitfeild:3;
};

int main(void){

struct A a1;

a1.varbitfeild = 7;
printf("variblebitfeild : %d\n",a1.varbitfeild);

a1.varbitfeild = 8;
printf("variblebitfeild : %d\n",a1.varbitfeild); // not get proper data becuase you have declrae only 3 bit

}