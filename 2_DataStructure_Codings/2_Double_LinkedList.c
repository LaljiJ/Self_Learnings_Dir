/******************************************************
 * Name: Lalji J
 * File name: Double_LinkedList.c
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

/*Structure*/
typedef struct std
{
    struct std *prev_ptr;
    int data;
    struct std *next_ptr;
} STD;

/*Golbal variable*/
STD *head_ptr = NULL;

/*
 * Function: add_node_begin
 * Arguments: STD ** , int
 * Return type: void
 * Description: Add the node beginning of the double linked list
 */
void add_node_begin(STD **head_ptr, int data)
{
    STD *new_node = NULL;

    new_node = (STD *)malloc(sizeof(STD));

    new_node->data = data;

    if (*head_ptr == NULL)
    {
        printf("No node available, adding one node in linked list\n");
        new_node->prev_ptr = NULL;
        new_node->next_ptr = NULL;
        *head_ptr = new_node;
        return;
    }
    else
    {
        new_node->prev_ptr = NULL;
        new_node->next_ptr = *head_ptr;
        *head_ptr = new_node;
    }
}

/*
 * Function: add_node_end
 * Arguments: STD **, int
 * Return type: void
 * Description: Add node at the end of the double linked list
 */
void add_node_end(STD **head_ptr, int data)
{
    STD *newnode = NULL, *temp_node = NULL;

    newnode = (STD *)malloc(sizeof(STD));

    newnode->data = data;

    if (*head_ptr == NULL)
    {
        printf("No node avaialable, add one node into the linked list\n");
        newnode->prev_ptr = NULL;
        newnode->next_ptr = NULL;
        *head_ptr = newnode;
        return;
    }
    else
    {
        temp_node = *head_ptr;

        while (temp_node->next_ptr != NULL)
        {
            temp_node = temp_node->next_ptr;
        }

        temp_node->next_ptr = newnode;
        newnode->next_ptr = NULL;
    }
}

/*
 * Function: add_node_middle
 * Arguments: STD **, int
 * Return type: void
 * Description: Add node at the middle of the double linked list
 */
void add_node_middle(STD **head_ptr, int data)
{
    STD *new_node = NULL, *temp_node = NULL, *temp_prev_node = NULL;

    new_node = (STD *)malloc(sizeof(STD));
    new_node->data = data;

    if (*head_ptr == NULL)
    {
        printf("No node available in linked list\n");
        new_node->prev_ptr = NULL;
        new_node->next_ptr = NULL;
        *head_ptr = new_node;
        return;
    }

    temp_node = *head_ptr;

    if (temp_node->data >= data)
    {
        new_node->prev_ptr = NULL;
        new_node->next_ptr = *head_ptr;
        (*head_ptr)->prev_ptr = new_node;
        *head_ptr = new_node;
        return;
    }

    while (temp_node != NULL && temp_node->data <= data)
    {
        temp_prev_node = temp_node;
        temp_node = temp_node->next_ptr;
    }

    new_node->next_ptr = temp_node;
    new_node->prev_ptr = temp_prev_node;
    temp_prev_node->next_ptr = new_node;

    if (temp_node != NULL)
    {
        temp_node->prev_ptr = new_node;
    }
}

/*
 * Function: delete_node_list
 * Arguments: STD **, int
 * Return type: void
 * Description: delete particular node from the double linked list
 */
void delete_node_list(STD **head_ptr, int data)
{
    STD *temp_node = NULL, *temp_prev = NULL;

    if (*head_ptr == NULL && data == 0)
    {
        printf("No node available into the linked list and data value become 0\n");
        return;
    }

    temp_node = *head_ptr;

    if (temp_node->data == data)
    {
        *head_ptr = temp_node->next_ptr;
        free(temp_node);
        return;
    }

    while (temp_node->data != data)
    {
        temp_prev = temp_node;
        temp_node = temp_node->next_ptr;
    }
    temp_prev->next_ptr = temp_node->next_ptr;
    free(temp_node);
}

/*
 * Function: print_node_all
 * Arguments: STD *
 * Return type: void
 * Description: Print all the node which are available in double linked list
 */
void print_node_all(STD *head_ptr)
{
    STD *temp_node = NULL;
    temp_node = head_ptr;

    while (temp_node != NULL)
    {
        printf("data: %d\n", temp_node->data);

        temp_node = temp_node->next_ptr;
    }
}

/*
 * Function: count_node_all
 * Arguments: STD *
 * Return type: int
 * Description:Count all the node which are available in double linked list
 */
int count_node_all(STD *head_ptr)
{
    STD *temp_node = NULL;
    int count_node = 0;

    temp_node = head_ptr;

    while (temp_node != NULL)
    {
        count_node++;
        temp_node = temp_node->next_ptr;
    }
    return count_node;
}



/*
 * Function: revers_node_all
 * Arguments: STD *
 * Return type: int
 * Description:Revers all node which are available in double linked list
 */
void revers_node_all(STD **head_ptr)
{
    STD *temp_node_prev = NULL,*temp_node_next = NULL,*temp_node_current = NULL;

    if(*head_ptr == NULL)
    {
        printf("No node available into the linked list\n");
        return;
    }
    else
    {
        temp_node_current = *head_ptr;

        while(temp_node_current != NULL)
        {
            temp_node_next = temp_node_current->next_ptr;
            temp_node_current->next_ptr = temp_node_prev;
            temp_node_prev = temp_node_current;
            temp_node_current = temp_node_next;
        }
        *head_ptr = temp_node_prev;
    }

}


/*Main function*/
int main(void)
{
    char option = 0;
    int number = 0, number2 = 0, total_node = 0;

    do
    {
        printf("Enter number\n");
        scanf("%d", &number);

        // add_node_begin(&head_ptr,number);
        // add_node_end(&head_ptr,number);
        add_node_middle(&head_ptr, number);

        printf("Enter option, do you want to add another node?\t y or n\n");
        scanf(" %c", &option);

    } while (option == 'y' || option == 'Y');

    print_node_all(head_ptr);

    total_node = count_node_all(head_ptr);
    printf("Total node before delete: %d\n", total_node);

    // printf("Enter node number you want to delete\n");
    // scanf("%d", &number2);

    // delete_node_list(&head_ptr, number2);

    revers_node_all(&head_ptr);

    printf("After revers all node:\n");
    print_node_all(head_ptr);

    total_node = count_node_all(head_ptr);
    printf("Total node before delete: %d\n", total_node);
}
