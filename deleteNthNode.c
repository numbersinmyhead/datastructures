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

void delete (int position, Node **head)
{
    Node *temp = (Node*)malloc(sizeof(Node));

    if (position == 1)
    {
       temp = *head;
       *head = temp->next;
       free (temp);
       return;
    }

    Node *temp2 = *head;
    for (int i = 0; i < position - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp = temp2->next;
    temp2->next = temp->next;
    free (temp);
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
    insert (32, 1, &head);
    insert (36, 2, &head);
    insert (39, 3, &head);
    insert (45, 4, &head);
    insert (49, 1, &head);
    insert (51, 2, &head);
    insert (58, 3, &head);
    insert (68, 4, &head);

    printLL(head);

    delete(2, &head);
    printLL(head);

    delete (6, &head);
    printLL(head);
    delete (9, &head);
    printLL(head);

    delete (1, &head);
    printLL(head);
    delete (1, &head);
    printLL(head);
    return 0;
}




