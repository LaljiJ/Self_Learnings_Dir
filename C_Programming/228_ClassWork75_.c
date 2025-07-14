#include<stdio.h>
union A
{
int i;
char c;
float f;
};
main()
{
union A a1;
a1.i=300;
printf("%d\t%d\n",a1.i,a1.c);

a1.c='c';
printf("%d\t%d\n",a1.i,a1.c);
}
