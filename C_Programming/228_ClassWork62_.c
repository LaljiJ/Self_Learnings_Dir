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
struct one **p;
int i,n;

printf("enter n\n");
scanf("%d",&n);

p=malloc(sizeof(struct one)*n);

for(i=0;i<n;i++)
p[i]=malloc(sizeof(struct one));


//p->name=malloc(sizeof(10));

for(i=0;i<n;i++)
{
printf("enter rollno\n");
scanf("%d",&p[i]->rollno);

printf("enter rollno\n");
scanf("%s",p[i]->name);


printf("enter rollno\n");
scanf("%g",&p[i]->mark);
}

for(i=0;i<n;i++)
printf("%p\t%p\t%p\n",p[i]->rollno,p[i]->name,p[i]->mark);




}
