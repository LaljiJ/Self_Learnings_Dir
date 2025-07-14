#include<stdio.h>
#include<stdlib.h>
struct one
{
int rollno;
char name[10];
float mark;
};
main()
{
struct one *p;

p=malloc(sizeof(struct one));

printf("enter rollno\n");
scanf("%d",&p->rollno);

printf("enter rollno\n");
scanf("%s",p->name);


printf("enter rollno\n");
scanf("%g",&p->mark);


printf("%d %s %f\n",p->rollno,p->name,p->mark);




}
