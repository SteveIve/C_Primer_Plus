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
        printf("栈空，取值失败。\n");
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
        printf("空栈。\n");
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

    // 创建一个链表栈
    Stack *stack = CreateStack();

    // 存入十个数
    for (int i = 1; i <= 10; i++)
    {
        PushIn(i, stack);
    }
    
    // 打印栈
    PrintStack(stack);

    // 弹出1个数
    PopOut(stack);
    PrintStack(stack);

    // 弹出9个数
    for (int i = 0; i < 9; i++)
    {
        PopOut(stack);
    }
    PrintStack(stack);

    // 继续弹出一个数，应报错。
    PopOut(stack);


    system("pause");
    return 0;
}