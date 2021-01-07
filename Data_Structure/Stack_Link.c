#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Stack;

Stack *CreateStack(void)
{
    Stack *stack = malloc(sizeof(Stack));
    stack->next = NULL;
    return stack;
}

int isEmpty(Stack *stack)
{
    return (stack->next == NULL);
}

void PushIn(int value, Stack *stack)
{
    Stack *new_node = malloc(sizeof(Stack));
    new_node->value = value;
    new_node->next = stack->next;
    stack->next = new_node;
    return;
}

int PopOut(Stack *stack)
{
    int isEmpty(Stack*);

    if (isEmpty(stack))
    {
        printf("ջ�գ�ȡֵʧ�ܡ�\n");
        return NULL;
    }
    else
    {
        Stack *popNode = stack->next;
        stack->next = popNode->next;
        int returnValue = popNode->value;
        free(popNode);
        return returnValue;
    }
}

void PrintStack(Stack *stack)
{
    int isEmpty(Stack*);

    if(isEmpty(stack))
    {
        printf("��ջ��\n");
        return;
    }
    Stack *top = stack->next;
    int counter = 0;
    
    while (top != NULL)
    {
        printf("%d", top->value);
        counter++;
        if (top->next != NULL)
        {
            printf(", ");
            if(counter % 10 == 0)
            {
                printf("\n");
            }
        }
        else
        {
            printf("\n");
        }
        top = top->next;
    }
}

int main(void)
{
    Stack *CreateStack(void);
    int isEmpty(Stack*);
    void PushIn(int, Stack*);
    int PopOut(Stack*);
    void PrintStack(Stack*);

    // ����һ������ջ
    Stack *stack = CreateStack();

    // ����ʮ����
    for (int i = 1; i <= 10; i++)
    {
        PushIn(i, stack);
    }
    
    // ��ӡջ
    PrintStack(stack);

    // ����1����
    PopOut(stack);
    PrintStack(stack);

    // ����9����
    for (int i = 0; i < 9; i++)
    {
        PopOut(stack);
    }
    PrintStack(stack);

    // ��������һ������Ӧ����
    PopOut(stack);


    system("pause");
    return 0;
}