#include<stdio.h>
struct one
{
char c;
int i;
float f;
};
struct one allre(void);
main()
{
struct one s1;
s1=allre();
printf("%c %d %f\n",s1.c,s1.i,s1.f);

}
struct one allre(void)
{
struct one s2={'a',10,45.2};
return s2;

}
