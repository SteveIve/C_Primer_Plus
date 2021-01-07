#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct Stack_Structure
{
    int Data[MAXSIZE];
    int top;
}Stack;


// ����һ��ջ
Stack *CreateStack(void)
{
    Stack *stack = malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

// ���һ��Ԫ��
int PushIn(int value, Stack *stack)
{
    if (stack->top == MAXSIZE - 1)
    {
        printf("ջ�������ʧ�ܡ�\n");
        return -1;
    }
    else
    {
        stack->Data[++(stack->top)] = value;
        return 0;
    }
}

// ����һ��Ԫ��
int PopOut(Stack *stack)
{
    if (stack->top == -1)
    {
        printf("ջ�գ�ȡֵʧ�ܡ�\n");
        return NULL;
    }
    int returnValue = stack->Data[(stack->top)--];
    return returnValue;
}

void PrintStack(Stack *stack)
{
    int counter = 0;
    for (int i = 0; i <= stack->top; i++)
    {
        printf("%d", stack->Data[i]);
        counter++;
        if (i == stack->top)
        {
            printf("\n");
        }
        else
        {
            printf(", ");
            if (counter % 10 == 0)
            printf("\n");
        }
    }
}


int main(void)
{
    Stack *CreateStack(void);
    int PushIn(int, Stack*);
    int PopOut(Stack*);
    void PrintStack(Stack*);

    // ����һ��ջ
    Stack *stack = CreateStack();

    // ȡ��һ������Ӧ����
    printf("%d\n", PopOut(stack));

    // ����1
    PushIn(1, stack);
    // ����2
    PushIn(2, stack);
    PrintStack(stack);

    // ����һ��Ԫ��
    PopOut(stack);
    PrintStack(stack);

    // ��������Ԫ��
    while (PopOut(stack))
    {
        continue;
    }

    PrintStack(stack);

    // ����Ԫ��
    for (int i = 0; i < MAXSIZE; i++)
    {
        PushIn(i, stack);
    }
    PrintStack(stack);

    // ����10��Ӧ����
    PushIn(10, stack);
    PrintStack(stack);

    system("pause");
    return 0;
}