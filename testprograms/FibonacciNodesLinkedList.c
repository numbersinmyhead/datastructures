#include <stdio.h>
#include <stdlib.h>
//#include "list.h"
/**
 * * Given a linked list of the structure:
 * struct node {
 * int val;
 * struct node* next;
 * };
 * print out the fibonacci nodes e.g. the 1st, 2nd, 3rd, 5th, 8th... nodes
 * up until the list ends.
 * */
#if 0
int main( int argc, char** argv ) {
    if( argc != 2 ) {
        printf( "usage fib num --you gave %d argsn", argc - 1 );
        exit( 0 );
    }
    int nodes = atoi( argv[ 1 ] );

    if( nodes < 1 ) {
        printf( "num must be a positive number --you gave %dn", nodes );
    }

    struct node* list = createList( nodes );
    // ...
    // freeList( list, nodes );

}
#endif

struct node {
    int data;
    struct node* next;
};

void insert (int data, int position, struct node **head)
{
    struct node *temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = data;
    temp1->next = NULL;

    if (position == 1)
    {
        temp1->next = *head;
        *head = temp1;

        return;
    }

    struct node *temp2 = *head;
    for (int i = 0; i < position - 2; i++)
    {
        temp2=temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;

    return;
}

void printLL(struct node *temp)
{
    while(temp != NULL) //this line is very important
    {
        printf("data:%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int arrayWithFibIndices[100] = {0};
    int series[10] = {0};
    series[0] = 1;
    series[1] = 2;
    for (int i = 0; i < 10; i++)
    {
        if (series[i] != 0)
        {
            printf ("series[%d]=%d.\n", i, series[i]);
        }
        else
        {
            //printf ("series[i-1]:%d, series[i-2]:%d", series[i-1], series[i-2]);
            series[i] = series[i - 1] + series[i - 2];
            printf ("series[%d]=%d.\n", i, series[i]);
        }
    }
}
