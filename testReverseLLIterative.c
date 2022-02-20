#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
}Node;

Node *head;

void insert(int data, int position) {
  //printf("Entering insert()\n");
  if (position == 0)
  {
    printf("invalid location\n");
    return;
  }

  Node *temp = malloc(sizeof(Node));
  temp->data = data;
  temp->next = NULL;

  if (position == 1) {
    temp ->next = head;
    head = temp;

    //printf("1. Leaving insert()\n");
    return;
  }

  Node *temp2 = head;
  for(int i = 0; i < (position - 2); i++)
  {
    temp2 = temp2->next;
  }

  temp->next = temp2->next;
  temp2->next = temp;
  //printf("2. Leaving insert()\n");
  return;
}


void printLL(Node *node) {
  //printf("Entering printLL()\n");
  while(node != NULL) {
    printf("%d ", node->data);
    node = node->next;
  }
  printf("\n\n");
  //printf("Leaving printLL()\n");
}

void reverseLL() {
  Node *current, *prev, *next;
  current = head;
  prev = NULL;

  while (current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}

void printLLRecursive(Node *node) {
  if (node == NULL) {
    return;
  }

  printf("%d ", node->data);
  printLLRecursive(node->next);
}


void printReversedLLRecursive(Node *node) {
  if (node == NULL) {
    return;
  }
  printLLRecursive(node->next);
  printf("%d ", node->data);
}


int main(int argc, char *argv[]) {
  head = malloc(sizeof(Node));
  head->data = 10;
  head->next = NULL;

  printLL(head);

  insert(5, 1);
  insert(100, 2);
  insert(50, 3);
  insert(40, 4);
  insert(15, 2);
  insert(20, 3);

  printLL(head);

  reverseLL();
  printf("ReversedLL:\n");
  printLL(head);

  //printf("\n Print List Recursively: ");
  //printLLRecursive(head);

  printf("\n Print Reversed Linked List Recursively: ");
  printReversedLLRecursive(head);
  printf("\n");

  return 0;
}
