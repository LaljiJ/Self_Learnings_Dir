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
struct one *p[5];
int i;

for(i=0;i<5;i++)
p[i]=malloc(sizeof(struct one));
//p->name=malloc(sizeof(10));

for(i=0;i<5;i++)
{
printf("enter rollno\n");
scanf("%d",&p[i]->rollno);

printf("enter rollno\n");
scanf("%s",p[i]->name);


printf("enter rollno\n");
scanf("%g",&p[i]->mark);
}

for(i=0;i<5;i++)
printf("%d\t%s\t%f\n",p[i]->rollno,p[i]->name,p[i]->mark);




}
