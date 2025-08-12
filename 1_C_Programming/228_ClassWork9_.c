#include<stdio.h>
main()
{
char ch='a';
int i=10;
float k=23.5;

void *l;


l=&ch;
printf("%c\n",*(char*)l);

l=&i;
printf("%d\n",*(int*)l);


l=&k;
printf("%f\n",*(float*)l);



}
