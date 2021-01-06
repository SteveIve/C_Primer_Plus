#include <stdio.h>
#include <stdlib.h>

typedef struct Linear_List
{
    int value;
    struct Linear_List *next;
}List;


// ���
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

// ���ҵ�n���ڵ�
List *FindNth(int n, List *list)
{
    if (n > getLength(list))
    {
        printf("���������ȡ�\n");
        return NULL;
    }
    else if (n < 1)
    {
        printf("����ֵ�������塣\n");
        return NULL;
    }
    
    List *node = list;
    for (int i = 1; i <= n; i++)
    {
        node = node->next;
    }

    return node;
}

// ��ֵ����
List *FindValue(int value, List *list)
{
    List *node = list;
    while (node != null && node->value != value)
    {
        node = node->next;
    }
    if (!node)
    {
        printf("δ���ҵ�ָ��ֵ��\n");
    }
    return node;
}

// ����
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
        printf("����λ�ò������塣\n");
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