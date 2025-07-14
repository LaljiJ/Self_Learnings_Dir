#include<stdio.h>
#include<stdlib.h>
struct st
{
int roll;
char name[10];
float mark;
};
void MALLOC(struct st **);
main()
{
struct st *p;

MALLOC(&p);

printf("enter roll\n");
scanf("%d",&p->roll);
printf("enter name\n");
scanf("%s",p->name);
printf("enter roll\n");
scanf("%f",&p->mark);

printf("%d %s %f",p->roll,p->name,p->mark);

}
void MALLOC(struct st **q)
{
*q=malloc(sizeof(struct st));


}
