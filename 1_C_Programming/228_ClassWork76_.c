#include<stdio.h>
union A
{
int i;
char c;
};
main()
{
union A a1;

a1.c=15;
if(a1.c==a1.c)
printf("litel\n");
else
printf("big\n");


}
