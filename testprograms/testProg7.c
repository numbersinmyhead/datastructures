/*

          F 
       /     \
      D       M 
     / \     / \
    B   E   L   P 
   / \     /   /
  A   C   H   S  
             / \
            R   T 

In-order traversal:
A->B->C->D->E->F->H->L->M-P->R->S->T

Requirement:
WAF (pseudo-code) that given a starting node, advances to the next in-order node in a binary tree.
Please also provide a data-structure definition of a node.
*/

typedef struct node
{
    char data;
    struct node *left;
    struct node *right;
};


node *next_node(node *current)
{
    node *next;
    // current - any node in the tree, advance to next node //

    if (current == NULL)
    {
        return NULL;
    }
    
    if (current->left != NULL)
    {
        current->left = next_node (current->left);
    }
    print ("%c\n",current->data);

    if (current->right != NULL)
    {
        current->right = next_node (current->right);
    }
        
    next = current; 
    return next;
}

int main ()
{

}



}





