/*
Undesratnd Pointer concepts (increment decrement on pointer)
*/

#include<stdio.h>

int main(void){

//constkeyword datatype *varibalename = address
int i = 258;
int *p;
char *q;

    p = &i;
    q = &i;
    printf("&i : %p\n",&i);
    printf("p : %p | q : %p\n",p,q);
    printf("p+1 : %p | q+1 : %p\n",p+1,q+1);

}