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

void insertAtTheEnd(Node *temp, int data)
{
    //Node *temp = (Node*)malloc(sizeof(Node));
    //temp = *head;
    Node *temp2 = (Node*)malloc(sizeof(Node));
    temp2->data = data;
    temp2->next = NULL;
    while ((temp)->next != NULL)
    {
        (temp) = (temp)->next;
    }
    if ((temp)->next == NULL)
    {
        (temp)->next = temp2;
    }
}

int main(void)
{
    Node *head = NULL; //(Node*)malloc(sizeof(Node));

    insert (23, 1, &head);
    insert (25, 2, &head);
    insert (27, 3, &head);
    insert (29, 4, &head);

    printLL(head);
    insertAtTheEnd(head, 30);

    printLL(head);

    insertAtTheEnd(head, 33);
    insertAtTheEnd(head, 36);
    insertAtTheEnd(head, 45);
    printLL(head);
    return 0;
}


