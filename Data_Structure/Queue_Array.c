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

// 创建队列
Queue *CreateQueue(void)
{
    Queue *queue = malloc(sizeof(Queue));
    queue->front = queue->rear = queue->size = 0;
    return queue;
}

// 检测队列是否未空
int isEmpty(Queue *queue)
{
    return (!(queue->size));
}

// 检测队列是否满
int isFull(Queue *queue)
{
    return (queue->size == maxsize);
}

// 向队列添加一个元素
int Add(int value, Queue *queue)
{
    int isFull(Queue*);

    if (isFull(queue))
    {
        printf("队列满，添加失败。\n");
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

// 从队列中删除一个元素
int Delete(Queue *queue)
{
    int isEmpty(Queue*);

    if (isEmpty(queue))
    {
        printf("队列空。\n");
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

// 打印队列
void PrintQueue(Queue *queue)
{
    int isEmpty(Queue*);
    if (isEmpty(queue))
    {
        printf("队列空。\n");
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
    // 创建队列

    // 打印队列
    PrintQueue(queue);

    // 将队列装满
    int i = 1;
    while (!isFull(queue))
    {
        Add(i, queue);
        i++;
    }

    // 打印队列
    PrintQueue(queue);

    // 增加元素11
    Add(11, queue);

    // 打印队列
    PrintQueue(queue);

    // 取出一个元素
    Delete(queue);

    // 打印队列
    PrintQueue(queue);

    // 增加元素1
    Add(1, queue);

    // 打印队列
    PrintQueue(queue);

    Delete(queue);
    // 打印队列
    PrintQueue(queue);

    system("pause");
    return 0;
}