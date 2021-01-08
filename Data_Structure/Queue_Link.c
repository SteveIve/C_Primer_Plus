#include <stdio.h>
#include <Stdlib.h>

// �ڵ�ṹ
typedef struct Node_Structure
{
    int data;
    struct Node_Structure *next;
}Node;

// ����ṹ
typedef struct Queue_Link
{
    Node *front;
    Node *rear;
}Queue;

// ��������
Queue *CreateQueue(void)
{
    Queue *queue = malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

// �����½ڵ�
Node *CreateNode(void)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->next = NULL;
    return new_node;
}


// �ж��Ƿ�Ϊ��
int isEmpty(Queue *queue)
{
    return (queue->front == NULL);
}

// ���Ԫ��
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

// ɾ��Ԫ��
int Delete(Queue *queue)
{
    int isEmpty(Queue*);

    if (isEmpty(queue))
    {
        printf("���пա�\n");
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

// ��ӡ����
void PrintQueue(Queue *queue)
{
    Node *node = queue->front;
    if(node == NULL)
    {
        printf("���пա�\n");
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

    // ����һ������
    Queue *queue = CreateQueue();

    // ���20��Ԫ��
    int i = 1;
    while (i <= 20)
    {
        Add(i, queue);
        i++;
    }

    // ��ӡ����
    PrintQueue(queue);

    printf("\n");

    // ��ʱ������һ��Ԫ��0����Ӧ����
    Add(0, queue);

    // ��ӡ����
    PrintQueue(queue);

    // ɾ��һ��Ԫ��
    Delete(queue);

    // ��ӡ����
    PrintQueue(queue);

    // �������
    while (!isEmpty(queue))
    {
        Delete(queue);
    }
    // ��ӡ����
    PrintQueue(queue);

    // ��ʱɾ��һ�����ݣ�Ӧ����
    Delete(queue);

    system("pause");
    return 0;
}