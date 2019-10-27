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

void reverseList(Node **head)
{
    Node *current, *next, *prev;
    current = *head;
    prev = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev; //this line is very importnat because it can't be currnet if it is current then it would mean that printLL would fail to print anytinng since current (aka head) is null
}

int main(void)
{
    Node *head = NULL; //(Node*)malloc(sizeof(Node));

    insert (23, 1, &head);
    insert (25, 2, &head);
    insert (27, 3, &head);
    insert (29, 4, &head);
    insert (33, 1, &head);
    insert (45, 2, &head);
    insert (57, 3, &head);
    insert (59, 4, &head);
    insert (63, 1, &head);
    insert (65, 2, &head);
    insert (77, 3, &head);
    insert (39, 4, &head);

    printf ("Original List \n");
    printLL(head);

    reverseList(&head);

    printf ("Printing in Reverse \n");
    printLL(head);

    return 0;
}


