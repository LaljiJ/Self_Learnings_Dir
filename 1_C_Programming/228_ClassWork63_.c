#include<stdio.h>
struct one
{
char c;
int i;
unsigned int m:6;
float f;
};
main()
{
struct one s1;
s1.m=33;
scanf("%d",&s1.m);
printf("%d\n",s1.m);

}
