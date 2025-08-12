/******************************************************
 * Name: Lalji J
 * File name: Single_LinkedList.c
 * Functions:
 *   1. add_node_begin
 *   2. add_node_end
 *   3. add_node_middle
 *   4. delete_node_list
 *   5. print_node_all
 *   6. reverse_node_all
 ******************************************************/

/*Standart header files*/
#include <stdio.h>
#include <stdlib.h>

/*Structure*/
struct STD
{
    int data;
    struct STD *next;
};

/*
 * Function: add_node_begin
 * Arguments: struct STD ** , int
 * Return type: void
 * Description: Add the node beginning of the linked list
 */
void add_node_begin(struct STD **hp, int data)
{
    struct STD *node = NULL, *temp = NULL;

    node = malloc(sizeof(struct STD));

    node->data = data;

    if (*hp == NULL)
    {
        printf("No node available adding node\n");
        node->next = NULL;
        *hp = node;
    }
    else
    {
        temp = *hp;
        node->next = temp;
        *hp = node;
    }
}

/*
 * Function: print_node_all
 * Arguments: struct STD **
 * Return type: void
 * Description: Print all the node which are available in single linked list
 */
void print_node_all(struct STD *hp)
{
    struct STD *temp = NULL;
    temp = hp;

    while (temp != NULL)
    {
        printf("data:\t %d\n", temp->data);
        temp = temp->next;
    }
}

/*
 * Function: add_node_end
 * Arguments: struct STD **, int
 * Return type: void
 * Description: Add node at the end of the single linked list
 */
void add_node_end(struct STD **hp, int data)
{
    struct STD *newnode = NULL, *temp = NULL;

    newnode = (struct STD *)malloc(sizeof(struct STD));

    newnode->data = data;

    if (*hp == NULL)
    {
        printf("Node node avialable adding one node\n");
        newnode->next = NULL;
        *hp = newnode;
    }
    else
    {
        temp = *hp;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode->next = NULL;
        temp->next = newnode;
    }
}

/*
 * Function: add_node_middle
 * Arguments: struct STD **, int
 * Return type: void
 * Description: Add node at the middle of the single linked list
 */
void add_node_middle(struct STD **hp, int data)
{
    struct STD *newnode = NULL, *prevnode = NULL, *nextnode = NULL;

    newnode = (struct STD *)malloc(sizeof(struct STD));

    newnode->data = data;

    if (*hp == NULL)
    {
        printf("No node available adding a node\n");
        newnode->next = NULL;
        *hp = newnode;
        return;
    }

    nextnode = *hp;

    if (nextnode->data >= data)
    {
        newnode->next = *hp;
        *hp = newnode;
        return;
    }

    while (nextnode != NULL && nextnode->data <= data)
    {
        prevnode = nextnode;
        nextnode = nextnode->next;
    }
    newnode->next = nextnode;
    prevnode->next = newnode;
}

/*
 * Function: delete_node_list
 * Arguments: struct STD **, int
 * Return type: void
 * Description: delete particular node from the single linked list
 */
void delete_node_list(struct STD **hp, int data)
{
    struct STD *prevnode = NULL, *nextnode = NULL;

    if (*hp == NULL)
    {
        printf("No node available\n");
        return;
    }

    nextnode = *hp;

    if (nextnode != NULL && nextnode->data == data)
    {
        *hp = nextnode->next;
        free(nextnode);
        return;
    }

    while (nextnode->data != data)
    {
        prevnode = nextnode;
        nextnode = nextnode->next;
    }
    prevnode->next = nextnode->next;
    free(nextnode);
}


/*
 * Function: reverse_node_all
 * Arguments: struct STD **
 * Return type: void
 * Description: reverse the single linked list
 */
void reverse_node_all(struct STD **hp)
{
    struct STD *temp_node_next = NULL,*temp_node_prev = NULL,*current_node = NULL;

    if(*hp == NULL)
    {
        printf("No node available into the linked list\n");
        return;
    }
    else
    {
        current_node = *hp;

        while(current_node != NULL)
        {
            temp_node_next = current_node->next;
            current_node->next = temp_node_prev;
            temp_node_prev = current_node;
            current_node = temp_node_next;
        }
        *hp = temp_node_prev;
    }

}



/*Main function*/
int main()
{
    char option = 0;
    int number = 0, number2 = 0;
    struct STD *hp = NULL;

    do
    {
        printf("Enter data number\n");
        scanf("%d", &number);

        // add_node_begin(&hp,number);
        // add_node_end(&hp,number);
        add_node_middle(&hp, number);

        printf("Enter you want to add new node? y or n\n");
        scanf(" %c", &option);

    } while (option == 'y' || option == 'Y');

    print_node_all(hp);

    // printf("Enter which node you want to delete?\n");
    // scanf("%d", &number2);

    // delete_node_list(&hp, number2);

    printf("After Revers:\n");
    reverse_node_all(&hp);

    print_node_all(hp);
}