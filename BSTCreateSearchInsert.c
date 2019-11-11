#include <stdlib.h>
#include <stdio.h>

//program to create, insert and print nodes in a binary search tree.

typedef struct BSTNodes {
    int data;
    struct BSTNodes *left;
    struct BSTNodes *right;
}BSTNode;

BSTNode *CreateNewBSTNode(int data)
{
    BSTNode *newNode = (BSTNode*) malloc(sizeof(BSTNode));

    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = data;

    return newNode;
}

BSTNode *Insert (BSTNode *root, int data)
{
    if (root == NULL)
    {
        return CreateNewBSTNode (data);
    }

    if (data <= root->data)
    {
        root->left = Insert (root->left, data);
    }
    else if (data > root->data)
    {
        root->right = Insert (root->right, data);
    }
    return root;
}

BSTNode *InOrderTraversal(BSTNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->left != NULL)
    {
        root->left = InOrderTraversal (root->left);
    }
    printf ("%d ", root->data);
    if (root->right != NULL)
    {
        root->right = InOrderTraversal (root->right);
    }
    return root;
}

int main ()
{
    
   BSTNode *node = NULL;
   node = Insert (node, 12);
   node = Insert (node, 13);
   node = Insert (node, 14);
   node = Insert (node, 152);
   node = Insert (node, 2);
   node = Insert (node, 10);
   node = Insert (node, 1);
   node = Insert (node, 6);
   node = Insert (node, 0);
   InOrderTraversal(node);

   return 0;
}

