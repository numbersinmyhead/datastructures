#include <stdio.h>
#include <stdlib.h>

// THis program demonstrates how pass by reference (sort of)
// works with structures in C language.

/* card structure definition */
struct card
{
   int face; // define pointer face
   int *ptrInt;
}; // end structure card

typedef struct card Card ;

/* prototype */
void passByReference(Card *c) ;

int main(void)
{
    Card c ;
    c.face = 1 ;
    Card *cptr = &c ; // pointer to Card c

    printf("The value of c before function passing = %d\n", c.face);
    printf("The value of cptr before function = %d\n",cptr->face);

    passByReference(cptr);

    printf("The value of c after function passing = %d\n", c.face);
    printf("The value of cptr after function passing = %d\n", cptr->face);


    printf ("\n\nWe are now going to intialize the struct differently\n");
    Card *testStruct = (Card *)malloc(sizeof(Card));
    testStruct->face = 10;
    testStruct->*ptrInt = 15;
    printf("The value of testStruct before function = %d\n",testStruct->face);
    
    passByReference(testStruct);
    printf("The value of testStruct after function passing = %d\n", testStruct->face);
    free(testStruct);
    return 0 ; // successfully ran program
}

void passByReference(Card *c)
{
    c->face = 4;
}
