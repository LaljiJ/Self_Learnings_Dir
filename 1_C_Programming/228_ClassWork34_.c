#include<stdio.h>
main()
{
FILE *fp;
char s[10];


fp=fopen("data","r");

if(fp==0)
{
printf("file not present\n");
return;
}
//else
printf("file present\n");
}
