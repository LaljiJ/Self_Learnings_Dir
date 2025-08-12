#include<stdio.h>
struct A
{
int roll;
char name[20];
float mark;
};
main()
{
struct A s1;
FILE *fp=fopen("data","r");

fscanf(fp,"%d %s %f",&s1.roll,s1.name,&s1.mark);

printf("%d %s %f\n",s1.roll,s1.name,s1.mark);



}
