#include <stdio.h>
#include <stdlib.h>

typedef struct DoubleNode
{
    int data;
    struct DoubleNode *prior, *next;
    struct DoubleNode rear;
    int length;
}DNode;

