#include<stdio.h>
#include<stdlib.h>
main()
{
char **p;
int i,n;

printf("enter n\n");
scanf("%d",&n);

p=malloc(sizeof(char*)*n);


for(i=0;i<n;i++)
p[i]=malloc(sizeof(char)*10);

printf("enter string..\n");
for(i=0;i<n;i++)
scanf("%s",p[i]);
//gets(p[i]);

for(i=0;i<n;i++)
printf("%s\n",p[i]);



}
