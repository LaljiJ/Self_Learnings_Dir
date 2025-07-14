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
    struct std *ptr;

    // to access data of stuctre used (-> arrow)
    ptr->ch = 'a';
    ptr->i = 10;
    ptr->f = 23.5;

    printf("%c  %d  %f\n",ptr->ch,ptr->i,ptr->f);
}