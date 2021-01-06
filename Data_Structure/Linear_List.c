#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
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
    for (int i = 1; i < n; i++)
    {
        node = node->next;
    }

    return node;
}

// ��ֵ����
List *FindValue(int value, List *list)
{
    List *node = list;
    while (node != NULL && node->value != value)
    {
        node = node->next;
    }
    if (!node)
    {
        printf("δ���ҵ�ָ��ֵ��\n");
    }
    return node;
}

// ����Ԫ��
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
        printf("����λ�ò������塣\n");
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

// ɾ����n���ڵ�
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
            printf("������Ԫ�أ�ɾ��ʧ�ܡ�\n");
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
        printf("ɾ��λ�ò������塣\n");
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
    // ����ʮ����ֵ

    PrintList(list);

    PrintList(Delete(3,list));
    // ɾ��������Ԫ��

    PrintList(Insert(3, 3, list));
    // ���������Ԫ��3

    // ���ҵ�8��Ԫ��
    printf("%d\n", (FindNth(8, list))->value);

    // ����Ԫ�ء�11��
    FindValue(11, list);

    system("pause");
    return 0;
}