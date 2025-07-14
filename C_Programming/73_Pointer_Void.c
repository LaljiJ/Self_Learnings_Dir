/*
Understand void pointer 
*/
/*
Undesratnd Pointer concepts (increment decrement on pointer)
*/

#include<stdio.h>

int main(void){
char ch = 'a';
int i = 10;
float f = 23.5;

void *ptr;

ptr = &ch;
printf("ptr = %c\n",*(char *)ptr);

ptr = &i;
printf("ptr = %d\n",*(int *)ptr);

ptr = &f;
printf("ptr = %f\n",*(float *)ptr);

}