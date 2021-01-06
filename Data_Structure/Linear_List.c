#include <stdio.h>
#include <stdlib.h>

typedef struct Linear_List
{
    int value;
    struct Linear_List *next;
}List;


// 求表长
int getLength(List *list)
{
    int i = 0;
    List *node = list;
    while (node)
    {
        node = node->next;
        i++;
    }

    return i;
}

// 查找第n个节点
List *FindNth(int n, List *list)
{
    if (n > getLength(list))
    {
        printf("超出链表长度。\n");
        return NULL;
    }
    else if (n < 1)
    {
        printf("索引值不合语义。\n");
        return NULL;
    }
    
    List *node = list;
    for (int i = 1; i <= n; i++)
    {
        node = node->next;
    }

    return node;
}

// 按值查找
List *FindValue(int value, List *list)
{
    List *node = list;
    while (node != null && node->value != value)
    {
        node = node->next;
    }
    if (!node)
    {
        printf("未查找到指定值。\n");
    }
    return node;
}

// 插入
List *Insert(int value, int index, List *list)
{
    int getLength(List*);
    List *FindNth(int, List*);

    List *new_node = malloc(sizeof(List));
    
    if (index == 1)
    {
        new_node->value = value;
        new_node->next = list;
        return new_node;
    }
    else if (index <1 || FindNth(index, list) == NULL)
    {
        printf("插入位置不合语义。\n");
        return NULL;
    }
    else
    {
        new_node->value = value;
        List *last_node = FindNth(index-1, list);
        new_node->next = last_node->next;
        last_node->next = new_node;
        return list;
    }
}