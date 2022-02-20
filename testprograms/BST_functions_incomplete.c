#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Example BST:
*
*        8
*     /     \
*    4       12
*   / \     /  \
*  1   7  11    20
*/


struct node {
    int value;
    struct node *left, *right, *parent;
}

/* print the bst in-order */
void printBst( struct node *n ) {
    if (node == NULL)
        return;
    
    if (root->left != NULL) //this is not necessary maybe
    printBst(root->left);

    print(“%d ”, root->data);

    if (root->right != NULL) //not necessary maybe
    printBST(root->right);
}

struct node * findMin( struct node *n ){
    if (n == NULL)
        return n;
    
    while(n != NULL)
        n= n->left;
    
    return n;
    
    // or another approach
    if (n == NULL)
        return;
    if (n->left == NULL)
        printf(“%n”,n->data);
    return findMin(n->left);
}

struct node * findNext( struct node *n ) {
    if (n == NULL)
        return NULL;
    
    if (n->left != NULL)
        return (findNext(n->left));

    if (n->right != NULL)
        return (findNext(n->right));
}

void foo( struct node *root) {
    for( struct node * n = findMin(root); n; n = findNext(n) ) {
        printf( "%d ", n->value );
    }
}

int main()
{


}



