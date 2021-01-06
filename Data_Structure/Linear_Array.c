#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

typedef struct Linear_Array
{
    int Data[MAXSIZE];
    int length;
} List;

// ��ʼ��һ����
List *MakeEmptyList()
{
    List *ptrL = malloc(sizeof(List));
    ptrL->length = 0;
    return ptrL;
}

// ���в�����ֵ����������ֵ��δ�ҵ�����-1
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

// ���в�����ֵ������ɹ�����0��ʧ�ܷ���-1
int Insert(int index, int value, List *ptrL)
{
    int i;
    if (ptrL->length == MAXSIZE)
    {
        printf("����������ʧ�ܡ�\n");
        return -1;
    }
    if (index > ptrL->length)
    {
        printf("����λ�ò������塣\n");
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

// ����ɾ������
int Delete(int index, List *ptrL)
{
    if (index >= ptrL->length || index < 0)
    {
        printf("���������ֵ��\n");
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
    // ����һ����

    for (int i = 0; i < MAXSIZE; i++)
    {
        Insert(i, i+1, ptrL);
    }   
    // ���в���1~10
    PrintList(ptrL);

    // ɾ����0��Ԫ�أ���˱�Ϊ2~10
    Delete(0, ptrL);
    PrintList(ptrL);

    // ��ʱɾ����9��Ԫ�أ�Ӧ����
    Delete(9, ptrL);

    printf("%d\n", FindData(2, ptrL));
    // ����2��Ӧ����0

    printf("%d", FindData(9, ptrL));
    // ����9��Ӧ����7

    system("pause");
    return 0;
}