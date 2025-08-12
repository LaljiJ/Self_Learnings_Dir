#include<stdio.h>
#include<stdlib.h>
main()
{
int *p;

p=malloc(sizeof(int));

printf("enter the data\n");
scanf("%d",p);

printf("%d\n",*p);

}
