#include <stdio.h>
#include <Stdlib.h>

// 节点结构
typedef struct Node_Structure
{
    int data;
    struct Node_Structure *next;
}Node;

// 链表结构
typedef struct Queue_Link
{
    Node *front;
    Node *rear;
}Queue;

// 创建链表
Queue *CreateQueue(void)
{
    Queue *queue = malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

// 创建新节点
Node *CreateNode(void)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->next = NULL;
    return new_node;
}


// 判断是否为空
int isEmpty(Queue *queue)
{
    return (queue->front == NULL);
}

// 添加元素
int Add(int value, Queue *queue)
{
    Node *CreateNode(void);
    
    Node *node = CreateNode();
    node->data = value;
    if (isEmpty(queue))
    {
        queue->rear = queue->front = node;
    }
    else
    {
        queue->rear->next = node;
        queue->rear = node;
    }
    return 1;
    
    
}

// 删除元素
int Delete(Queue *queue)
{
    int isEmpty(Queue*);

    if (isEmpty(queue))
    {
        printf("队列空。\n");
        return NULL;
    }
    else if (queue->front==queue->rear)
    {
        int returnValue = queue->rear->data;
        free(queue->front);
        queue->front = queue->rear = NULL;
        return returnValue;
    }
    else
    {
        int returnValue = queue->front->data;
        Node *new_head = queue->front->next;
        free(queue->front);
        queue->front = new_head;
        return returnValue;
    }
    
}

// 打印队列
void PrintQueue(Queue *queue)
{
    Node *node = queue->front;
    if(node == NULL)
    {
        printf("队列空。\n");
        return;
    }
    else
    {
        int counter = 0;
        while (node != NULL)
        {
            printf("%3d", node->data);
            
            counter++;
            if (node->next == NULL)
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
            }
            node = node->next;
        }
    }
}

int main(void)
{
    Queue *CreateQueue(void);
    int isEmpty(Queue*);
    int Add(int, Queue*);
    int Delete(Queue*);
    void PrintQueue(Queue*);

    // 创建一个队列
    Queue *queue = CreateQueue();

    // 添加20个元素
    int i = 1;
    while (i <= 20)
    {
        Add(i, queue);
        i++;
    }

    // 打印队列
    PrintQueue(queue);

    printf("\n");

    // 此时再增加一个元素0，不应报错
    Add(0, queue);

    // 打印队列
    PrintQueue(queue);

    // 删除一个元素
    Delete(queue);

    // 打印队列
    PrintQueue(queue);

    // 清空数据
    while (!isEmpty(queue))
    {
        Delete(queue);
    }
    // 打印队列
    PrintQueue(queue);

    // 此时删除一个数据，应报错
    Delete(queue);

    system("pause");
    return 0;
}