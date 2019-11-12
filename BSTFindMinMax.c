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

int FindMin (BSTNode *root)
{
    if (root == NULL)
    {
        return -1;
    }

    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;

}

int FindMax(BSTNode *root)
{
    if (root == NULL)
        return -1;

    while (root->right) 
        root = root->right;
    
    return root->data;
}


void FindMinRecursive(BSTNode *root)
{
    if (root == NULL)
        return;
    else if (root->left != NULL) 
        FindMinRecursive(root->left);
    else if (root->left == NULL)
        printf ("Min data:%d", root->data);
}

void FindMaxRecursive(BSTNode *root)
{
    if (root == NULL)
        return;
    else if (root->right != NULL) 
        FindMaxRecursive(root->right);
    else if (root->right == NULL)
        printf (", Max data:%d \n", root->data);
}

int main ()
{
   BSTNode *node = NULL;
   node = Insert (node, 152);
   node = Insert (node, 153);
   node = Insert (node, 1102);
   node = Insert (node, 93);
   node = Insert (node, 133);
   node = Insert (node, 131);
   InOrderTraversal(node);
   printf ("\n");
   //printf ("Min: %d", FindMin(node));
   //printf ("Max: %d", FindMax(node));
   FindMinRecursive(node);
   FindMaxRecursive(node);
   //printf ("Min Recursive: %d", node->data);
   return 0;
}

