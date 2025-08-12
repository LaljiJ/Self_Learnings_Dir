#include<stdio.h>
struct one
{
int rollno;
char name[10];
float mark;
};
main()
{
struct one s1={10,"lalji",56.23},*p;
p=&s1;
printf("%d %s %f\n",p->rollno,p->name,p->mark);




}
