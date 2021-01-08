#include <stdio.h>
#include <stdlib.h>
#define maxsize 10

typedef struct Queue_Array
{
    int data[maxsize];
    int front;
    int rear;
    int size;
}Queue;

// ��������
Queue *CreateQueue(void)
{
    Queue *queue = malloc(sizeof(Queue));
    queue->front = queue->rear = queue->size = 0;
    return queue;
}

// �������Ƿ�δ��
int isEmpty(Queue *queue)
{
    return (!(queue->size));
}

// �������Ƿ���
int isFull(Queue *queue)
{
    return (queue->size == maxsize);
}

// ��������һ��Ԫ��
int Add(int value, Queue *queue)
{
    int isFull(Queue*);

    if (isFull(queue))
    {
        printf("�����������ʧ�ܡ�\n");
        return 0;
    }
    else
    {
        queue->rear = ((queue->rear) + 1) % maxsize;
        queue->data[queue->rear] = value;
        queue->size++;
        return 1;
    }
}

// �Ӷ�����ɾ��һ��Ԫ��
int Delete(Queue *queue)
{
    int isEmpty(Queue*);

    if (isEmpty(queue))
    {
        printf("���пա�\n");
        return NULL;
    }
    else
    {
        int returnValue = queue->data[queue->front];
        queue->front = ((queue->front) + 1) % maxsize;
        queue->size--;
        if (isEmpty(queue))
        {
            queue->front = -1;
            queue->rear = -1;
        }
        return returnValue;
    }   
}

// ��ӡ����
void PrintQueue(Queue *queue)
{
    int isEmpty(Queue*);
    if (isEmpty(queue))
    {
        printf("���пա�\n");
        return;
    }
    else
    {
        int counter = 0;
        for (int i = queue->front+1; counter < queue->size; i++)
        {
            printf("%d", queue->data[i]);
            counter++;
            if (counter == queue->size)
            {
                printf("\n");
            }
            else
            {
                printf(", ");
                if (counter % 10 == 0)
                {
                    printf("\n");
                }
                if (i == maxsize - 1)
                {
                    i = -1;
                }
            }
        }
        return;
    }
}

int main(void)
{
    Queue *CreateQueue(void);
    int isEmpty(Queue*);
    int isFull(Queue*);
    int Add(int, Queue*);
    int Delete(Queue*);
    void PrintQueue(Queue*);

    Queue *queue = CreateQueue();
    // ��������

    // ��ӡ����
    PrintQueue(queue);

    // ������װ��
    int i = 1;
    while (!isFull(queue))
    {
        Add(i, queue);
        i++;
    }

    // ��ӡ����
    PrintQueue(queue);

    // ����Ԫ��11
    Add(11, queue);

    // ��ӡ����
    PrintQueue(queue);

    // ȡ��һ��Ԫ��
    Delete(queue);

    // ��ӡ����
    PrintQueue(queue);

    // ����Ԫ��1
    Add(1, queue);

    // ��ӡ����
    PrintQueue(queue);

    Delete(queue);
    // ��ӡ����
    PrintQueue(queue);

    system("pause");
    return 0;
}