#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// we are gonna try and reverse a string using the
// concept of stacks. Stack offer O(1) time complecity
// so they are great in doing this.

typedef struct Nodes
{
    char data;
    struct Nodes *next;
}Node;

char ret = '\0';
void Push(Node **head, char data)
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

void PrintAll(Node *temp)
{
    if(temp == NULL) return;
    printf("%c, ", temp->data);
    PrintAll(temp->next);
}

char Pop(Node **head)
{
    //printf ("Deleting....\n");
    if(*head == NULL)
    {
        printf("head is empty. Cannot Pop anymore\n");
        return '\0';
    }
    Node *temp = *head;
    ret = temp->data;
    *head = (*head)->next;
    free (temp);
    return ret; 
}

int main()
{
    Node *head = NULL;
    
    char str[] = "helloworld";
    char newStr[] = {};
    printf("Original String is:%s\n", str);
    printf("Length is:%lu\n", strlen(str));
    
    for (int i = 0; i <strlen(str); i++)
    {
        Push(&head, str[i]);
    }

    printf ("String has been pushed on the stack.\n");
    PrintAll(head);
    printf("\nString has been printed. Now popping:%ld.\n", strlen(str));
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = Pop(&head);
        //printf("%c ", Pop(&head));
        printf("%c", str[i]);
    }
    printf("\n");
    printf ("String has been popped from the stack.\n");
    return 0;
}
