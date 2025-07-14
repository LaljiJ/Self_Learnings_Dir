/*
Understand signle linkedlist
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct std{
    int roll;
    char name[20];
    float mark;
struct std *next;
}ST;

void add_begin(ST **);
void print_data(ST *);

int main(void){
    char option;
    ST *hp=0;

    do
    {
        add_begin(&hp);
        printf("do you want to add another node ? y or n\n");
        scanf(" %c",&option);

    } while (option == 'y' || option == 'Y');

print_data(hp);
}

void add_begin(ST **ptr){
    ST *temp;

    temp = malloc(sizeof(ST));

    printf("Enter roll\n");
    scanf("%d",&temp->roll);
    printf("Enter name\n");
    scanf(" %[^\n]",temp->name);
    printf("Enter mark\n");
    scanf("%f",&temp->mark);

    temp->next = *ptr;
    *ptr = temp;
}

void print_data(ST *p){
    while (p)
    {
        printf("%d\t%s\t%f\n",p->roll,p->name,p->mark);
        p = p->next;
    }   
}