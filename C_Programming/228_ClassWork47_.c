#include<stdio.h>
#include<stdlib.h>
main()
{
char *p;

p=malloc(sizeof(char)*10);

printf("enter string..\n");
scanf("%[^\n]",p);

printf("%s\n",p);



}
