#include <stdio.h>
#include <stdlib.h>


typedef struct Nodes {
    int data;
    struct Nodes *next;
}Node;

void insert (int data, int position, Node **head)
{
    Node *temp1 = (Node*)malloc(sizeof(Node));
    temp1->data = data;
    temp1->next = NULL;

    if (position == 1)
    {
        temp1->next = *head;
        *head = temp1;

        return;
    }

    Node *temp2 = *head;
    for (int i = 0; i < position - 2; i++)
    {
        temp2=temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;

    return;
}

void printLL(Node *temp)
{
    while(temp != NULL) //this line is very important
    {
        printf("data:%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(void)
{
    Node *head = NULL; //(Node*)malloc(sizeof(Node));

    insert (23, 1, &head);
    insert (25, 2, &head);
    insert (27, 3, &head);
    insert (29, 4, &head);

    printLL(head);

    return 0;
}




































//Disabling half of the program because 
#if 0

#include <stdio.h>
#include <stdlib.h>

// Program to create a linked list
// then insert a data at the Nth position.
typedef struct Nodes
{
    int data;
    struct Nodes *next;
}Node;

void Insert(int data, int pos, Node **head)
{
    Node *temp1 = (Node*) malloc(sizeof(Node));
    temp1->data = data;
    temp1->next = NULL;

    if (pos < 1)
    {
        printf("invalid position\n");
        return;
    }

    /*if (!*head)
    {
        printf("head is null!");
        return;
    }*/

    if (pos == 1)
    {
        temp1->next = *head;
        *head = temp1;
        //printf("Set the head to head->data:%d\n", (*head)->data);
        return;
    }

    Node *temp2 = (Node*) malloc(sizeof(Node));
    temp2 = *head;
    for (int i = 0; i < pos-2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void printLL(Node *temp)
{
    while(temp != NULL) //this line is very important
    {
        printf("data:%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main ()
{
    //Node *head = NULL;
    Node *head = (Node*) malloc(sizeof(Node));
    head->data = 21;
    head->next = NULL;
    Insert(11, 1, &head);
    printLL(head);
    Insert(22, 2, &head);
    printLL(head);
    Insert(111, 1, &head);
    printLL(head);

    return 0;
}
#endif


















