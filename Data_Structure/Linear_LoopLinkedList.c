#include <stdio.h>
#include <stdlib.h>

typedef struct Loop_Node
{
    int data;
    struct Loop_Node *next;
}LNode, List;

List *CreateList(void)
{
    List *list = (List*)malloc(sizeof(LNode));
    list->data = 0;
    list->next = list;
    return list;
}

LNode *findNth(int loc, List *list)
{
    int length = list->data;
    if (loc < 1 || loc >length)
    {
        if (loc < 1)
        {
            printf("查找位序不合法。\n");
        }
        else
        {
            printf("查找位序超出循环链表长度。\n");
        }
        return NULL;
    }
    LNode *node = list->next;
    int i = 1;
    while (i < loc)
    {
        node = node->next;
        i++;
    }
    return node;
}

int isEmpty(List *list)
{
    return (list == list->next);
}

LNode *Insert(int loc, int value, List *list)
{
    LNode *findNth(int, List*);

    int length = list->data;
    LNode *node;
    if (loc < 1 || loc > length + 1)
    {
        printf("插入位序不合法。\n");
        return NULL;
    }
    else if (loc == 1)
    {
        node = (LNode*)malloc(sizeof(LNode));
        node->data = value;
        node->next = list->next;
        list->next = node;
    }
    else if (loc == length + 1)
    {
        LNode *prior_node = findNth(length, list);
        node->data = value;
        node->next = list;
        prior_node->next = node;
    }
    else
    {
        LNode *prior_node = findNth(loc-1, list);
        LNode *next_node = prior_node->next;
        LNode *new_node = (LNode*)malloc(sizeof(LNode));
        new_node->data = value;
        new_node ->next = next_node;
        prior_node->next = node;
    }
    list->data++;
    return node;
}

int Delete(int loc, List *list)
{
    LNode *findNth(int, List*);

    int length = list->data;
    if (loc <1)
    {
        printf("删除位序不合法。\n");
        return 0;
    }
    else if (length == 0)
    {
        printf("链表空。\n");
        return 0;
    }
    else if(loc > length)
    {
        printf("删除位序超出链表长度。\n");
        return 0;
    }
    else
    {
        LNode *deleted_node;
        if (loc ==1)
        {
            deleted_node = list->next;
            LNode *next_node = deleted_node->next;
            list->next = next_node;
            free(deleted_node);
            list->data--;
            return 1;
        }
        else if (loc == length)
        {
            LNode *prior_node = findNth(loc-1, list);
            deleted_node = prior_node->next;
            prior_node->next = list;
            free(deleted_node);
            list->data--;
            return 1;
        }
        else
        {
            LNode *prior_node = findNth(loc-1, list);
            deleted_node = prior_node->next;
            LNode *next_node = deleted_node->next;
            prior_node->next = next_node;
            free(deleted_node);
            list->data--;
            return 1;
        }
    }
}

void PrintList(List *list)
{
    int length = list->data;
    if (length == 0)
    {
        printf("链表空。\n");
        return;
    }
    else
    {
        int count = 0;
        LNode *node = list->next;
        printf("链表长度为%d, 链表内容如下: \n", length);
        for (int i = 0; i < length; i++)
        {
            printf("%d", node->data);
            node = node->next;
            count++;
            if (i == length-1)
            {
                printf("\n");
            }
            else
            {
                printf(", ");
                if (count % 10 == 0)
                {
                    printf("\n");
                }
            }
        }
    }
}

int main(void)
{
    List *CreateList(void);
    LNode *findNth(int, List*);
    int isEmpty(List*);
    LNode *Insert(int, int, List*);
    int Delete(int, List*);
    void PrintList(List*);

    List *list = CreateList();
    PrintList(list);

    int i = 1;
    while (i <= 9999)
    {
        Insert(1, i, list);
        i++;
    }

    PrintList(list);

    // while (list->data != 0)
    // {
    //     Delete(1, list);
    // }

    // PrintList(list);


    system("pause");
    return 0;
}