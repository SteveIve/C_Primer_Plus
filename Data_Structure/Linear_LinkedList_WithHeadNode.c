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

    int length = getLength(list);

    if (loc < 1 || loc > length)
    {
        printf("位序非法。\n");
        return NULL;
    }
    else if (list->next == NULL)
    {
        printf("链表空，删除失败。\n");
        return NULL;
    }
    else
    {
        
        if (loc == 1)
        {
            List *deletedNode = list->next;
            list->next = deletedNode->next;
            return deletedNode;
        }
        
        if (loc == length)
        {
            List *front = findNth(length-1, list);
            List *deletedNode = front->next;
            front->next = NULL;
            return deletedNode;
        }
        else
        {
            List *last_node = findNth(loc-1, list);
            List *deletedNode = last_node->next;
            last_node->next = deletedNode->next;
            return deletedNode;
        }
    }
    
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

List *reverseList(List *list)
{
    int getLength(List*);
    List *findNth(int, List*);
    List *Delete(int, List*);
    List *Insert(int, int, List*);

    int length = getLength(list);
    if (length == 1 || length == 0)
    {
        return list;
    }
    else
    {
        List *node;
        List *first_node = list->next;
        for(int i = 1; i <= length; i++)
        {
            node = Delete(i, list);
            list = Insert(node->value, 1, list);
        }
        first_node->next = NULL;
        return list;
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
    List *reverseList(List*);

    List *list = CreateList();
    
    for (int i = 1; i <= 10; i++)
    {
        list = Insert(i, i, list);
    }

    PrintList(list);

    Delete(1, list);
    PrintList(list);

    printf("%d\n", (findValue(3, list))->value);
    PrintList(list);

    printf("%d\n", findNth(3, list)->value);

    while(list->next)
    {
        Delete(1, list);
    }

    PrintList(list);

    printf("\n\n");
    for (int i = 1; i <= 10; i++)
    {
        list = Insert(i, i, list);
    }
    PrintList(list);
    reverseList(list);
    PrintList(list);

    system("pause");
    return 0;
    
}