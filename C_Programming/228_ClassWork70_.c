#include<stdio.h>
#include<stdlib.h>
struct one
{
int i;
char n[10];
float f;
};

struct one * Malloc(void);

main()
{
struct one *p;                   

p=Malloc();

printf("enter roll\n");
scanf("%d",&p->i);
printf("enter name\n");
scanf("%s",p->n);
printf("enter mark\n");
scanf("%f",&p->f);

printf("%d\t %s\t %f\n",p->i,p->n,p->f);

}
struct one * Malloc(void)
{
struct one *p;
p=malloc(sizeof(struct one));
}
