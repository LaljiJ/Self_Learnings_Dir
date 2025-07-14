#include<stdio.h>
#include<stdlib.h>
main()
{
char *p[5];
int i;

for(i=0;i<5;i++)
p[i]=malloc(sizeof(char)*10);

printf("enter string..\n");
for(i=0;i<5;i++)
//scanf("%s",p[i]);
gets(p[i]);
for(i=0;i<5;i++)
puts(p[i]);
//printf("%s\n",p[i]);



}
