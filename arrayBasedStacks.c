#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

void push(int x, int *arr, int *top); //insert an element 

void peak(int *arr, int top); //display the top element
void pop(int *top); //pop 

int main()
{
    int arr[STACK_SIZE] = {0};
    int top = 0;
    push(5, arr, &top);
    peak(arr, top);
    push(6, arr, &top);
    peak(arr, top);
    push(9, arr, &top);
    peak(arr, top);

    pop(&top);
    peak(arr, top);
    pop(&top);
    peak(arr, top);

    return 0;
}


void push(int x, int *arr, int *top)
{
    if (*top > STACK_SIZE)
    {
        printf("Failed to add more, stack overflow\n");
        return;
    }

    (*top)++;
    arr[*top] = x;
}

void peak(int *arr, int top)
{
    printf(">>%d<<\n", arr[top]);
}

void pop(int *top)
{
    (*top)--;
    if (*top < 1)
    {
        printf("End of stack reached.\n");
        return;
    }
}

