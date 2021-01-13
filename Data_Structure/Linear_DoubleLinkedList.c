#include <stdio.h>
#include <stdlib.h>

typedef struct DoubleNode
{
    int data;
    struct DoubleNode *prior, *next;
}DNode;

typedef struct DoubleList
{
    DNode *head;
    DNode *rear;
    int length;
}DList;

DNode *CreateNode(void)
{
    DNode *node = (DNode*)malloc(sizeof(DNode));
    node->next = node->prior = NULL;
}

DList *CreateEmptyList(void)
{
    DNode *CreateNode(void);

    DList *list = (DList*)malloc(sizeof(DList));
    list->head = CreateNode(void);
    list->rear = NULL;
    list->head->data = 980508;
    return list;
}

int isEmptyList(DList *list)
{
    return (list->rear);
}

DNode *findNth(int loc, DList *list)
{
    if (loc < 1 || loc >list->length)
    {
        printf("查找位序非法。\n");
        return NULL;
    }
    else
    {
        DNode *node = list->head->next;
        for (int i = 1; i < loc; i++)
        {
            node = node->next;
        }
        return node;
    }
}

int findValue(int value, DList *list)
{
    DNode *node = list->head->next;
    int count = 1;
    while (node->data != value && node->next != NULL)
    {
        node = node->next;
        count++;
    }
    if (node)
    {
        return count;
    }
    else
    {
        printf("未找到指定值。\n");
        return NULL;
    }
}

DList *Insert(int loc, int value, DList *list)
{
    DNode *CreateNode(void);
    DNode *findNth(int, DList*);

    if (loc <1 || loc > list->length+1)
    {
        printf("插入位置非法，插入失败。\n");
    }
    else
    {
        if (loc == length+1)
        {
            DNode *newNode = CreateNode();
            newNode->data = value;
            list->rear->next = newNode;
            newNode->prior = list->rear;
            list->rear = newNode;
        }
        else
        {
            DNode *orig = findNth(loc, list);
            DNode *newNode = CreateNode();
            newNode->data = value;
            newNode->prior = orig->prior;
            newNode->next = orig;
            orig->prior->next = newNode;
            orig->prior = newNode;
        }
        list->length++;
    }
    return list;
}

DList *DeleteNode(int loc, DList *list)
{
    DNode *findNth(int, DList*);

    if (loc < 1 || loc > list->length)
    {
        printf("删除位序非法。\n");
    }
    else
    {
        if (loc == list->length)
        {
            DNode *deletedNode = list->rear;
            deletedNode->prior->next = NULL;
            list->rear = deletedNode->prior;
            free(deletedNode);
        }
        else
        {
            DNode *deletedNode = findNth(loc, list);
            deletedNode->next->prior = deletedNode->prior;
            deletedNode->prior->next = deletedNode->next;
            free(deletedNode);
        }
        list->length--;
    }
    return list;
}

