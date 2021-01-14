#include <stdio.h>
#include <stdlib.h>
#define maxsize 10
#define available -2
#define last_node -1

typedef struct StaticNode
{
    int value;
    int index;
}SNode, SList[maxsize + 1];

SList CreateSList(void)
{
    SList slist;
    for (int i = 0; i < maxsize + 1; i++)
    {
        if (i == 0)
        {
            slist[i].index = last_node;        // -1 means this node is the last node
            slist[i].value = 980508     // head node has no meaningful value
        }
        else
        {
            slist[i].index = available;        // -2 means this node is available (empty)
        }
    }
    return slist;
}

int findAvailableNodeIndex(SList slist)
{
    int i = 1;
    while (i < maxsize + 1 && slist[i].index != available)
    {
        i++;
    }
    if (i == maxsize + 1)
    {
        printf("δ�ҵ����ÿռ�\n");
        return 0;
    }
    else
    {
        return i;
    }
}

int isFull(SList slist)
{
    int findAvailableNodeIndex(SList);

    if (findAvailableNodeIndex(slist))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int isEmpty(SList slist)
{
    int i = 0;
    while (i < maxsize + 1)
    {
        if (slist[i].index > 0)
        {
            return 0;
        }
    }
    return 1;
}

int getLength(SList slist)
{
    int isEmpty(SList);
    int isFull(SList);

    if (isEmpty(slist))
    {
        return 0;
    }
    else if (isFull(slist))
    {
        return maxsize;
    }
    else
    {
        SNode node = slist[slist[0].index];
        int count = 1;
        while (node.index != last_node)
        {
            count++;
            node = slist[node.index];
        }
        return count;
    }
}

int findNth(int loc, SList slist)
{
    int getLength(SList);

    if (loc < 1 || loc > maxsize)
    {
        printf("����λ��Ƿ���\n");
        return 0;
    }
    else
    {
        int length = getLength(slist);
        if (loc > length)
        {
            printf("����λ�ó��������ȡ�\n");
            return 0;
        }
        else
        {
            SNode node = slist[slist[0].index];
            int i = 1;
            while (i < loc)
            {
                node = slist[node.index];
            }
            return node.index;
        }
    }
}

int Insert(int loc, int value, SList slist)
{
    int isFull(SList);
    int findNth(int, SList);
    int findAvailableNodeIndex(SList);
    int getLength(SList);

    if (isFull(slist))                                                  // ����ʱ
    {
        printf("������������ʧ�ܡ�\n");
        return 0;
    }
    else if (loc < 1 || loc > maxsize)                                  // ��δ��������λ�÷Ƿ�
    {
        printf("����λ�÷Ƿ���\n");
        return 0;
    }
    else
    {
        int length = getLength(slist);
        int index = findAvailableNodeIndex(slist);
        if (loc > length + 1)                                           // ����������ʱ
        {
            printf("����λ�ó��������ȡ�\n");
            return 0;
        }
        else if (loc == 1)                                              // ����ͷ��ʱ
        {
            slist[index].value = value;
            slist[index].index = findNth(1, slist);
            slist[0].index = index;
            return 1;
        }
        else if (loc == length + 1)                                     // ����β��ʱ
        {
            int lastIndex = findNth(length, slist);
            slist[index].value = value;
            slist[lastIndex].index = index;
            slist[index].index = last_node;
            return 1;
        }
        else                                                            // ������ͨλ��ʱ
        {
            int lastIndex = findNth(loc-1, slist), nextIndex = findNth(loc, slist);
            slist[index].value = value;
            slist[lastIndex].index = index;
            slist[index].index = nextIndex;
            return 1;
        }
    }
}

int Delete(int loc, SList slist)
{
    int getLength(SList);
    int findNth(int, SList);

    int length = getLength(slist);

    if (loc < 1 || loc > maxsize)
    {
        printf("ɾ��λ�򲻺Ϸ���\n");
        return 0;
    }
    else
    {
        if (loc > length)
        {
            printf("ɾ��λ�򳬳������ȡ�\n");
            return 0;
        }
        else
        {
            if (loc == 1)
            {
                int secIndex = findNth(2, slist);
                int firIndex = slist[0].index;
                slist[0].index = secIndex;
                slist[firIndex].index = available;
                return firIndex;
            }
            else if (loc == length)
            {
                int priorIndex = findNth(length-1, slist);
                int deletedIndex = slist[priorIndex].index;
                slist[priorIndex].index = last_node;
                slist[deletedIndex].index = available;
                return deletedIndex;
            }
            else
            {
                int priorIndex = findNth(loc-1, slist);
                int deletedIndex = slist[priorIndex].index;
                int laterIndex = slist[deletedIndex].index;
                slist[priorIndex].index = laterIndex;
                slist[deletedIndex].index = available;
                return deletedIndex;
            }
        }
    }
}