#include<stdio.h>
struct one
{
char c;
int i;
float f;
};

void fun(char,int,float);
void fun1(struct one);
void fun2(struct one *);
main()
{
struct one s1={'a',19,56.23};

fun(s1.c,s1.i,s1.f);
fun1(s1);
fun2(&s1);
}
void fun2(struct one *p)
{
printf("third fun\t %c\t %d\t %f\n",p->c,p->i,p->f);

}

void fun1(struct one s1)
{
printf("second fun\t %c\t %d\t %f\n",s1.c,s1.i,s1.f);
}


void fun(char c,int i,float f)
{
printf("first fun\t %c\t %d\t %f\n",c,i,f);
}
