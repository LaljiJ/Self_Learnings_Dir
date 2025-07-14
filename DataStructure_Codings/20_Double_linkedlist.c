/*
Understand double linkedlist
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct dll{
    struct dll *prev;
    int num;
    struct dll *next;
}DLL;

DLL *hp;

void add_begin(void);
void print_data(void);

int main(void){
    char option;

    do
    {
        add_begin();
        printf("do you want to add another node ? y or n\n");
        scanf(" %c",&option);

    } while (option == 'y' || option == 'Y');

print_data();
}

void add_begin(void){
    DLL *temp;

    temp = malloc(sizeof(DLL));

    printf("Enter roll\n");
    scanf("%d",&temp->num);

temp->prev = NULL;
temp->next = NULL;

    if(hp == 0){
        hp = temp;
    }
    else{
        temp->next = hp;
        hp->prev = temp;
        hp = temp;
    }
}

void print_data(void){
    DLL *p = hp;

    while(p){
        printf("%d\t",p->num);
        p = p->next;
    }
printf(\n);
}