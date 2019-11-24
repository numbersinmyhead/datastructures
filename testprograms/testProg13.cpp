#include <stdio.h>
#include <stdlib.h>
#include <cstdio>


struct node {
    int value;
    node * left;
    node * right;
    node * parent;
    
    node( int value, node * left, node * right, node * parent=NULL ) : 
        value( value ), left( left ), right( right ), parent( parent ) {}
};


struct node * findMin( struct node *n ){

    /*if (n == NULL)
        return n;
    
    while(n != NULL)
        n= n->left;
    
    return n;*/
    
    // or another approach
    if (n == NULL)
        return NULL;
    if (n->left == NULL)
        return n;
    return findMin(n->left);
}

struct node * findNext( struct node *n ) {
    if (n == NULL)
        return NULL;
    if (n->parent)
    {
        if (n->parent->left == n)
            return n->parent;
        if (n->parent->right == n)
            return n->right;
        else
            return n->left;
        /*if (n->parent->value >= n->value)
        {
            return n->parent;
        }
        else if (n->parent->value < n->value) 
        {
            return n->right;
        }
        else
            return NULL;*/
    }
    else
    {
        return n->right;
    }
}

// Test functions
void connect_parents( node * n, node * parent ) {
    if( n ) {
        n->parent = parent;
        connect_parents( n->left, n );
        connect_parents( n->right, n );
    }
}

node * construct_tree() {
    node * root = new node(101, 
            new node( 51, new node( 31, NULL, NULL ), new node( 91, NULL, NULL ) ),
            new node( 161, new node( 141, NULL, NULL ),new node( 171, NULL, NULL ) ) );
    connect_parents( root, NULL );
    return root;
}

int main() {
    node * root = construct_tree();
    for( node * n = findMin( root ); n; n = findNext( n ) ) {
        printf( "%d \n", n->value );
    }
    return 0;
}


