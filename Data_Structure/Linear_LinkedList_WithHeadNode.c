#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
}List;

//创建链表
List *CreateList(void)
{
    List *list = (List *)malloc(sizeof(List));
    list->next = NULL;
    return list;
}

int getLength(List *list)
{
    int i = 0;
    List *node = list;
    while (node->next)
    {
        i++;
        node = node->next;
    }
    return i;
}

List *findNth(int n, List *list)
{
    int getLength(List*);

    if (n < 1)
    {
        printf("位序非法。\n");
        return NULL;
    }
    
    if (n > getLength(list))
    {
        printf("超出链表长度。\n");
        return NULL;
    }    
    
    List *node = list->next;
    int i = 1;
    while (i != n)
    {
        node = node->next;
        i++;
    }

    return node;
}

List *findValue(int value, List *list)
{
    List *node = list->next;
    while (node != NULL && node->value != value)
    {
        node = node->next;
    }

    if (!node)
    {
        printf("未查到指定值%d\n", value);
    }

    return node;
}

// 插入元素
List *Insert(int value, int loc, List *list)
{
    int getLength(List*);
    List *findNth(int, List*);

    if (loc < 1 || loc > getLength(list) + 1)
    {
        printf("插入位置非法。\n");
        return list;
    }
    else
    {
        List *new_node = malloc(sizeof(List));
        new_node->value = value;
        List *last_node;
        if (loc ==  1)
        {
            last_node = list;
        }
        else
        {
            last_node = findNth(loc-1,list);
        }
        new_node->next = last_node->next;
        last_node->next = new_node;
        return list;
    }
}

List* Delete(int loc, List *list)
{
    List *findNth(int, List*);
    int getLength(List*);

    if (loc < 1 || loc > getLength(list))
    {
        printf("位序非法。\n");
    }
    else if (list->next == NULL)
    {
        printf("链表空，删除失败。\n");
    }
    else if (loc == 1)
    {
        List *deletedNode = list->next;
        list->next = deletedNode->next;
        free(deletedNode);
    }
    return list;
}

void PrintList(List *list)
{
    List *node = list->next;
    if (!node)
    {
        printf("链表空。\n");
        return;
    }

    int counter = 0;
    while (node != NULL)
    {
        printf("%d", node->value);
        counter++;
        if(node->next != NULL)
        {
            printf(", ");
            if (counter%10 == 0)
            {
                printf(" ");
            }
        }
        else
        {
            printf("\n");
        }
        node = node->next;
    }
}

int main(void)
{
    int getLength(List*);
    List *findNth(int, List*);
    List *findValue(int, List*);
    List *Insert(int, int, List*);
    List *Delete(int, List*);
    void PrintList(List*);
    List *CreateList(void);

    List *list = CreateList();
    
    for (int i = 1; i <= 10; i++)
    {
        list = Insert(i, i, list);
    }

    PrintList(list);

    list = Delete(1, list);
    printf("%d\n", findValue(3, list)->value);
    PrintList(list);

    printf("%d\n", findNth(3, list)->value);

    while(list->next)
    {
        list = Delete(1, list);
    }

    PrintList(list);

    system("pause");
    return 0;
    
}