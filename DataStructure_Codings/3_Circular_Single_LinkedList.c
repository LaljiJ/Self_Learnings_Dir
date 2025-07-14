/******************************************************
 * Name: Lalji J
 * File name: Circular_LinkedList.c
 * Functions:
 *   1. add_node_begin
 *   2. add_node_end
 *   3. add_node_middle
 *   4. delete_node_list
 *   5. print_node_all
 *   6. count_node_all
 *   7. revers_node_all
 ******************************************************/

 /*Standart header files*/
#include <stdio.h>
#include <stdlib.h>


typedef struct std
{
    int data;
    struct std *next_ptr;
}STD;


void add_node_begin(STD **head_ptr,int data)
{
    STD *new_node = NULL,*temp_node1 = NULL;

    new_node = (STD *)malloc(sizeof(STD));

    new_node->data = data;

    if(*head_ptr == NULL)
    {
        printf("No node available, adding new node\n");
        new_node->next_ptr = new_node;
        *head_ptr = new_node;
    }
    else
    {
        temp_node1 = *head_ptr;

        while(temp_node1->next_ptr != *head_ptr)
        {
            temp_node1 = temp_node1->next_ptr;
        }
        new_node->next_ptr = *head_ptr;
        temp_node1->next_ptr = new_node;
        *head_ptr = new_node;
    }
}



void print_node_all(STD *head_ptr)
{
    if (head_ptr == NULL) 
    {
        return;
    }

    STD *temp_node = head_ptr;
    do
    {
        printf("%d -> ", temp_node->data);
        temp_node = temp_node->next_ptr;
    } while (temp_node != head_ptr);
    
    printf("HEAD\n");
}



int main(void)
{
    STD *head_ptr = NULL;
    char option = 0;
    int number = 0;

    do
    {
        printf("Enter data\n");
        scanf("%d",&number);

        add_node_begin(&head_ptr,number);

        printf("You want to add another node? y or n\n");
        scanf(" %c",&option);

    }while(option == 'y' || option == 'Y');

    print_node_all(head_ptr);
}