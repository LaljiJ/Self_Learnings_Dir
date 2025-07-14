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
int c=0;
s1.m=33;

while(s1.m)
{
c++;
s1.m=s1.m<<1;

}

printf("bit lenth=%d\n",c);

}
