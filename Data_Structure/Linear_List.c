#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
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
    for (int i = 1; i < n; i++)
    {
        node = node->next;
    }

    return node;
}

// 按值查找
List *FindValue(int value, List *list)
{
    List *node = list;
    while (node != NULL && node->value != value)
    {
        node = node->next;
    }
    if (!node)
    {
        printf("未查找到指定值。\n");
    }
    return node;
}

// 插入元素
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
    else if (index <1 || FindNth(index-1, list) == NULL)
    {
        printf("插入位置不合语义。\n");
        return NULL;
    }
    else if(index == getLength(list)+1)
    {
        new_node->value = value;
        (FindNth(index-1, list))->next = new_node;
        new_node->next = NULL;
        return list;
    }
    else 
    {
        new_node->value = value;
        List *last_node = FindNth(index-1, list);
        List *original_nth_node = last_node->next;
        new_node->next = original_nth_node;
        last_node->next = new_node;
        return list;
    }
}

// 删除第n个节点
List *Delete(int index, List *list)
{
    List *FindNth(int, List*);
    List *last_node = FindNth(index-1, list);
    List *the_node = last_node->next;
    
    if(index == 1)
    {
        
        List *node0 = list;
        List *node1 = list->next;
        if (node0 == NULL)
        {
            printf("链表无元素，删除失败。\n");
            return NULL;
        }
        else
        {
            free(node0);
            return  node1;
        }
        
    }
    else if (index < 1 || the_node == NULL)
    {
        printf("删除位置不合语义。\n");
        return NULL;
    }
    
    else
    {
        last_node->next = the_node->next;
        free(the_node);
        return list;
    }
    
}

void PrintList(List *list)
{
    List *node = list;
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

List *MakeEmptyList(void)
{
    List *list = malloc(sizeof(List));
    list->next = NULL;
    return list;
}

int main(void)
{
    int getLength(List*);
    List *FindNth(int, List*);
    List *FindValue(int, List*);
    List *Insert(int, int, List*);
    List *Delete(int, List*);
    void PrintList(List*);

    List *list = MakeEmptyList();
    list->value = 1;

    for(int i = 2; i <= 10; i++)
    {
        list = Insert(i, i, list);
    }
    // 插入十个数值

    PrintList(list);

    PrintList(Delete(3,list));
    // 删除第三个元素

    PrintList(Insert(3, 3, list));
    // 插入第三个元素3

    // 查找第8个元素
    printf("%d\n", (FindNth(8, list))->value);

    // 查找元素“11”
    FindValue(11, list);

    system("pause");
    return 0;
}