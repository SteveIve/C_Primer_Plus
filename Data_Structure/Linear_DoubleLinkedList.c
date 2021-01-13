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
        printf("����λ��Ƿ���\n");
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
        printf("δ�ҵ�ָ��ֵ��\n");
        return NULL;
    }
}

DList *Insert(int loc, int value, DList *list)
{
    if (loc <1 || loc > list->length+1)
    {
        printf("")
    }
}