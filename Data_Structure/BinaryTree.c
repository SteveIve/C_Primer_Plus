#include <stdio.h>
#include <stdlib.h>

typedef struct BinaryTree
{
    int data;
    struct BinaryTree *left;
    struct BinaryTree *right;
} *position;

typedef position BinTree;



void PreOrderTraversal(BinTree BT)
{
    if (BT)
    {
        printf("%d", BT->data);
        PreOrderTraversal(BT->left);
        PreOrderTraversal(BT->right);
    }
}


void InOrderTraversal(BinTree BT)
{
    if(BT)
    {
        InOrderTraversal(BT->left);
        printf("%d", BT->data);
        InOrderTraversal(BT->right);
    }
}

void PostOrderTraversal(BinTree BT)
{
    if(BT)
    {
        PostOrderTraversal(BT->left);
        PostOrderTraversal(BT->right);
        printf("%d", BT->data);
    }
}

