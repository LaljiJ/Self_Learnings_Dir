/*
Understand user define datatype union
*/


#include<stdio.h>

struct A{
    char ch;
    int i;
    float f;
};

union B{
char ch2;
int i2;
float f2;
};

int main(void){

    // create structure variable
    struct A a1;
    // create union variable
    union B b1;

    // to access data of stuctre used (. dot)
    a1.ch = 'a';
    a1.i = 10;
    a1.f = 23.5;

    b1.ch2 = 'a';
    b1.i2 = 10;
    b1.f2 = 23.5;

    printf("a1.ch : %c\ta1.i : %d\ta1.f : %f\n",a1.ch,a1.i,a1.f);
    printf("b1.ch2 : %c\tb1.i2 : %d\tb1.f2 : %f\n",b1.ch2,b1.i2,b1.f2);

    printf("Address -> a1.ch : %u\ta1.i : %u\ta1.f : %u\n",&a1.ch,&a1.i,&a1.f); // structre data start with diffrent address
    printf("Address -> b1.ch2 : %u\tb1.i2 : %u\tb1.f2 : %u\n",&b1.ch2,&b1.i2,&b1.f2); // unions data start with same address
}