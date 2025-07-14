#include<stdio.h>
main()
{
FILE *p;
char s[10];

printf("enter name\n");
scanf("%s",s);

p=fopen(s,"r");

if(p==0)
{
printf("file not \n");
return;
}
printf("file present \n");


}
