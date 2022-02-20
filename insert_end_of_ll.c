#include <stdio.h>
#include <stdlib.h>

struct Node {
  struct Node *next;
  int data;
};


void insert_nodes(struct Node **head, int data, int pos)
{
  if (pos < 1)
  {
    printf("Invalid input\n");
    return;
  }

  struct Node *temp = *head;
  struct Node *node = malloc(sizeof(struct Node));
  node->data = data;

  if (pos == 1)
  {
    *head = node;
    node->next = temp;
    return;
  }

  for (int i = 1; i < pos - 1; i++)
  {
    temp = temp->next;
  }

  //(*temp)->next is pointing to the elemnt we wanna insert at
  struct Node *temp_next = temp->next;
  temp->next = node;
  node->next = temp_next;
  return;
}


void printNodes(struct Node **head)
{
  while (*head != NULL)
  {
    printf ("%d, ", (*head)->data);
    *head = (*head)->next;
  }
  printf("\n");
}

int main(int argc, char **argv)
{
    struct Node *head = malloc(sizeof(struct Node*));

    head->next = NULL;
    head->data = 10;
    insert_nodes(&head, 20, 2);
    insert_nodes(&head, 5, 1);
    insert_nodes(&head, 25, 2);
    insert_nodes(&head, 50, 4);

    printNodes(&head);

    printf("Exit\n");
    free (head);
    return 0;
}
