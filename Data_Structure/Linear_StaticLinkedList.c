#include <stdio.h>
#include <stdlib.h>
#define maxsize 10
#define available -2
#define last_node -1

typedef struct StaticNode
{
    int value;
    int index;
}SNode, SList[maxsize + 1];

SList CreateSList(void)
{
    SList slist;
    for (int i = 0; i < maxsize + 1; i++)
    {
        if (i == 0)
        {
            slist[i].index = last_node;        // -1 means this node is the last node
            slist[i].value = 980508     // head node has no meaningful value
        }
        else
        {
            slist[i].index = available;        // -2 means this node is available (empty)
        }
    }
    return slist;
}

SNode findAvailableNode(SList slist)
{
    int i = 0;
    while (i < maxsize + 1 && slist[i].index != available)
    {
        i++;
    }
    if (i == maxsize + 1)
    {
        printf("Full List.\n");
        return NULL;
    }
    else
    {
        return slist[i];
    }
}

int isFull(SList slist)
{
    SNode findAvailableNode(SList);

    if (findAvailableNode(slist))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int isEmpty(SList slist)
{
    int i = 0;
    while (i < maxsize + 1)
    {
        if (slist[i].index > 0)
        {
            return 0;
        }
    }
    return 1;
}

SNode findNth(SList slist)
{
    
}