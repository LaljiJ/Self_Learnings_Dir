#include<stdio.h>
struct A
{
int roll;
char name[20];
float mark;
};
main()
{
struct A s1={9,"lalji",56.23};

FILE *fp=fopen("data","w");

fprintf(fp,"%d %s %f\n",s1.roll,s1.name,s1.mark); 




}
