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

printf("%u\n%u\n%u\n",&a1.i,&a1.c,&a1.f);

printf("union size = %d\n",sizeof(union A));
}
