/*
WAP to typedef a all datatype
*/


#include<stdio.h>

int main(void){
//prototype of typedef
// typedef datatype newname;

// multiple typedef
    typedef char CHAR;
    typedef CHAR CHAR2; 
    typedef CHAR2 CHAR3;

    typedef int INT;
    typedef INT INT2;
    typedef INT2 INT3;

    typedef float FLOAT;
    typedef FLOAT FLOAT2;

    CHAR2 ch = 'a';
    INT3 i = 10;
    FLOAT f = 23.5;

    printf("%c\t%d\t%f\n",ch,i,f);
    printf("%d\t%d\t%d\n",sizeof(ch),sizeof(i),sizeof(f));
}