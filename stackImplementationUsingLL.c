#include <stdio.h>
#include <stdlib.h>


// this is a stack implementation
// a stack has a time complexity of O(1) if
// we are removing the top element. We can 
// also remove the last element, but then the
// time complexity would be O(n) which isn't 
// desired.

//Since we are updating only top of the list,
//we create a LL to do just that.

// Insert at the top of the list.

typedef struct Nodes
{
    int data;
    struct Nodes *next;
}Node;

void Insert(Node **head, int data)
{
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    if (*head == NULL)
    {
        *head = temp;
        return;
    }

    temp->next = *head;
    *head = temp;
    return;
}

void print(Node *temp)
{
    if(temp == NULL) return;
    printf("data: %d.\n", temp->data);
    print(temp->next);
}

// Delete the top most element.
void delete(Node **head)
{
    printf ("Deleting....\n");
    if(*head == NULL)
    {
        printf("head is empty. Cannot delete anymore\n");
        return;
    }
    Node *temp = *head;
    *head = (*head)->next;
    free (temp); 
}

int main()
{
    Node *head = NULL;
    Insert(&head, 5);
    Insert(&head, 15);
    Insert(&head, 19);
    Insert(&head, 25);

    print (head);

    delete(&head);
    print (head);

    delete(&head);
    print (head);
    
    delete(&head);
    print (head);
    
    delete(&head);
    print (head);
    
    delete(&head);
    print (head);
    
    delete(&head);
    print (head);
    return 0;
}
