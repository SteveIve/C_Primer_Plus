#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// 定义CharNode, List类型，该类型为结构体，结构体包含一个字符值以及指向下一节点的指针。
typedef struct CharNode
{
    char ch;
    struct CharNode *next;
}Node, List;

// 创建一个空链表。
List *CreateEmptyList(void)
{
    List *list = (List*)malloc(sizeof(List));
    list->ch = '\0';
    list->next = NULL;
    return list;
}

// 获取一个链表的最后节点
// 返回值为最后节点指针
Node *getLastNode(List *list)
{
    Node *node = list;
    while (node->next)
    {
        node = node->next;
    }
    return node;
}

// 在最后节点后链接一个新节点，新节点的字符值为输入参数。
void Insert(List *list, char ch)
{
    Node *last_node = getLastNode(list);
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->ch = ch;
    new_node->next = NULL;
    last_node->next = new_node;
    return;
}

//中序表达式获取输入
void getInput_MidList(List *mid_list)
{
    int ch = getchar();
    while (ch != '\n')
    {
        Insert(mid_list, ch);
        ch = getchar();
    }
    return;
}

// 弹出栈顶元素。
 char PopOut(List *list)
{
    Node *pop_node = list->next;
    list->next = pop_node->next;
    char returnValue = pop_node->ch;
    free(pop_node);
    return returnValue;
}

// 向栈顶压入程序
void PushIn(char ch, List *list)
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->ch = ch;
    new_node->next = list->next;
    list->next = new_node;
    return ;
}

// 输出链表。
void PrintList(List *list)
{
    Node *node = list->next;
    if (node)
    {
        while (node)
        {
            printf("%c", node->ch);
            node = node->next;
        }
        printf("\n");
    }
    else
    {
        printf("链表空。");
    }
    return;
}

// 获取运算符优先级
int getWeight(char ch)
{
    int weight;
    switch (ch)
    {
    case '+':
    case '-':
        weight = 1;
        break;
    case '*':
    case '/':
        weight = 2;
        break;
    default: weight = 0;
        break;
    }
    return weight;
}

// 判断a的优先级是否高于b。
int isPrior(char a, char b)
{
    int a_weight = getWeight(a), b_weight = getWeight(b);
    return (a_weight >= b_weight);
}

// 将中缀表达式转换为后缀表达式。
List *getPostList(List *mid_list)
{
    List *post_list = CreateEmptyList();
    List *operator_list = CreateEmptyList();

    while (mid_list->next)
    {
        // 如果mid栈顶元素为数字
        if (isdigit(mid_list->next->ch))
        {
            // 则将数字添加到后缀表达式
            Insert(post_list, PopOut(mid_list));
        }
            
        // 如果不为数字，则默认为运算符。
        else
        {
            // 如果是左括号(，或者运算符栈为空，则直接压入运算符栈
            if ((mid_list->next->ch) == '(' || operator_list->next == NULL)
            {
                PushIn(PopOut(mid_list), operator_list);
            }
            // 如果是右括号)则弹出左括号之前所有的运算符，添加到后续表达式
            else if (mid_list->next->ch == ')')
            {
                PopOut(mid_list);                                                       // 抛弃mid顶端的右括号(
                while (operator_list->next->ch != '(')                                  // 然后将所有左括号顶端的运算符都添加到后续表达式
                {
                    Insert(post_list, PopOut(operator_list));
                }
                PopOut(operator_list);                                                  // 弹出左括号并抛弃
            }
            // 否则弹出运算符栈顶所有比当前运算符优先级高(或者等于)的运算符，压入前序表达式栈
            // 直到遇到栈空或左括号（
            else
            {
                if (operator_list->next->ch == '(')
                {
                    PushIn(PopOut(mid_list), operator_list);
                }
                else
                {
                    while ((operator_list->next != NULL) && (operator_list->next->ch != '(') && (isPrior(operator_list->next->ch, mid_list->next->ch)))
                    {
                        Insert(post_list, PopOut(operator_list));
                    }
                    PushIn(PopOut(mid_list), operator_list);
                }
            }
        }
    }

    while(operator_list->next)                                      // 将剩余运算符栈中的符号依次添加到后续表达式末尾
    {
        Insert(post_list,  PopOut(operator_list));
    }

    return post_list;
}

int getLength(List *list)
{
    int length = 0;
    Node *node = list->next;
    while (node)
    {
        length++;
        node = node->next;
    }
    return length;
}

