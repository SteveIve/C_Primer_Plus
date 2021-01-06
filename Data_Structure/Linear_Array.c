#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

typedef struct Linear_Array
{
    int Data[MAXSIZE];
    int length;
} List;

// 初始化一个表
List *MakeEmptyList()
{
    List *ptrL = malloc(sizeof(List));
    ptrL->length = 0;
    return ptrL;
}

// 表中查找数值，返回索引值，未找到返回-1
int FindData(int x, List *ptrL)
{
    int i = 0;
    while (i < ptrL->length && ptrL->Data[i] != x)
    {
        i++;
    }
    if (i > ptrL->length)
        return -1;
    else
        return i;
}

// 表中插入数值，插入成功返回0，失败返回-1
int Insert(int index, int value, List *ptrL)
{
    int i;
    if (ptrL->length == MAXSIZE)
    {
        printf("表满，插入失败。\n");
        return -1;
    }
    if (index > ptrL->length)
    {
        printf("插入位置不合语义。\n");
        return -1;
    }
    else
    {
        for (i = ptrL->length; i > index; i--)
        {
            ptrL->Data[i] = ptrL->Data[i-1];
        }
        ptrL->Data[index] = value;
        ptrL->length++;
        return 0;
    }
}

// 表中删除数据
int Delete(int index, List *ptrL)
{
    if (index >= ptrL->length || index < 0)
    {
        printf("错误的索引值。\n");
        return -1;
    }
    
    for (int i = index; i < ptrL->length; i++)
        ptrL->Data[i] = ptrL->Data[i+1];
    ptrL->length--;
    return 0;
}

void PrintList(List *ptrL)
{
    
    for (int i = 0; i < ptrL->length; i++)
    {
        printf("%d", ptrL->Data[i]);
        if (i<ptrL->length-1)
        {
            printf(", ");
        }
        else
        {
            printf("\n");
        }
    }
}

int main(void)
{
    List *MakeEmptyList();
    int FindData(int, List*);
    int Insert(int, int, List*);
    int Delete(int, List*);
    void PrintList(List*);

    List *ptrL = MakeEmptyList();
    // 创建一个表

    for (int i = 0; i < MAXSIZE; i++)
    {
        Insert(i, i+1, ptrL);
    }   
    // 表中插入1~10
    PrintList(ptrL);

    // 删除第0号元素，因此表为2~10
    Delete(0, ptrL);
    PrintList(ptrL);

    // 此时删除第9号元素，应报错
    Delete(9, ptrL);

    printf("%d\n", FindData(2, ptrL));
    // 查找2，应返回0

    printf("%d", FindData(9, ptrL));
    // 查找9，应返回7

    system("pause");
    return 0;
}