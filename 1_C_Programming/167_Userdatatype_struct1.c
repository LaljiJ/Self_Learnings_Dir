/*
Understand user define datatype 
*/

#include<stdio.h>
/*
prototype

keword tag{
    datavariable1;
    datavariable2;
    datavariable3;
};
*/
struct std{
char ch;
int i;
float f;
};

int main(void){

    // create structure variable
    struct std var1;

    // to access data of stuctre used (. dot)
    var1.ch = 'a';
    var1.i = 10;
    var1.f = 23.5;

    printf("%c  %d  %f\n",var1.ch,var1.i,var1.f);
}