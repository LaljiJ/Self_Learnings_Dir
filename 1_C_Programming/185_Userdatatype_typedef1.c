/*
Understand  typedef concepts
*/

#include<stdio.h>

int main(void){
//prototype of typedef
// typedef datatype newname;
    typedef char CHAR;
    typedef int INT;
    typedef float FLOAT;

    CHAR ch = 'a';
    INT i = 10;
    FLOAT f = 23.5;

    printf("%c\t%d\t%f\n",ch,i,f);
}