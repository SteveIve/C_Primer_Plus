#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct Stack_Structure
{
    int Data[MAXSIZE];
    int top;
}Stack;


// 创建一个栈
Stack *CreateStack(void)
{
    Stack *stack = malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

// 添加一个元素
int PushIn(int value, Stack *stack)
{
    if (stack->top == MAXSIZE - 1)
    {
        printf("栈满，添加失败。\n");
        return -1;
    }
    else
    {
        stack->Data[++(stack->top)] = value;
        return 0;
    }
}

// 弹出一个元素
int PopOut(Stack *stack)
{
    if (stack->top == -1)
    {
        printf("栈空，取值失败。\n");
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

    // 创建一个栈
    Stack *stack = CreateStack();

    // 取出一个数，应报错
    printf("%d\n", PopOut(stack));

    // 存入1
    PushIn(1, stack);
    // 存入2
    PushIn(2, stack);
    PrintStack(stack);

    // 弹出一个元素
    PopOut(stack);
    PrintStack(stack);

    // 弹出所有元素
    while (PopOut(stack))
    {
        continue;
    }

    PrintStack(stack);

    // 存满元素
    for (int i = 0; i < MAXSIZE; i++)
    {
        PushIn(i, stack);
    }
    PrintStack(stack);

    // 存入10，应报错
    PushIn(10, stack);
    PrintStack(stack);

    system("pause");
    return 0;
}