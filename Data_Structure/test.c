#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// ����CharNode, List���ͣ�������Ϊ�ṹ�壬�ṹ�����һ���ַ�ֵ�Լ�ָ����һ�ڵ��ָ�롣
typedef struct CharNode
{
    char ch;
    struct CharNode *next;
}Node, List;

// ����һ����������
List *CreateEmptyList(void)
{
    List *list = (List*)malloc(sizeof(List));
    list->ch = '\0';
    list->next = NULL;
    return list;
}

// ��ȡһ�����������ڵ�
// ����ֵΪ���ڵ�ָ��
Node *getLastNode(List *list)
{
    Node *node = list;
    while (node->next)
    {
        node = node->next;
    }
    return node;
}

// �����ڵ������һ���½ڵ㣬�½ڵ���ַ�ֵΪ���������
void Insert(List *list, char ch)
{
    Node *last_node = getLastNode(list);
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->ch = ch;
    new_node->next = NULL;
    last_node->next = new_node;
    return;
}

//�������ʽ��ȡ����
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

// ����ջ��Ԫ�ء�
 char PopOut(List *list)
{
    Node *pop_node = list->next;
    list->next = pop_node->next;
    char returnValue = pop_node->ch;
    free(pop_node);
    return returnValue;
}

// ��ջ��ѹ�����
void PushIn(char ch, List *list)
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->ch = ch;
    new_node->next = list->next;
    list->next = new_node;
    return ;
}

// ���������
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
        printf("�����ա�");
    }
    return;
}

// ��ȡ��������ȼ�
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

// �ж�a�����ȼ��Ƿ����b��
int isPrior(char a, char b)
{
    int a_weight = getWeight(a), b_weight = getWeight(b);
    return (a_weight >= b_weight);
}

// ����׺����ʽת��Ϊ��׺����ʽ��
List *getPostList(List *mid_list)
{
    List *post_list = CreateEmptyList();
    List *operator_list = CreateEmptyList();

    while (mid_list->next)
    {
        // ���midջ��Ԫ��Ϊ����
        if (isdigit(mid_list->next->ch))
        {
            // ���������ӵ���׺����ʽ
            Insert(post_list, PopOut(mid_list));
        }
            
        // �����Ϊ���֣���Ĭ��Ϊ�������
        else
        {
            // �����������(�����������ջΪ�գ���ֱ��ѹ�������ջ
            if ((mid_list->next->ch) == '(' || operator_list->next == NULL)
            {
                PushIn(PopOut(mid_list), operator_list);
            }
            // �����������)�򵯳�������֮ǰ���е�����������ӵ���������ʽ
            else if (mid_list->next->ch == ')')
            {
                PopOut(mid_list);                                                       // ����mid���˵�������(
                while (operator_list->next->ch != '(')                                  // Ȼ�����������Ŷ��˵�����������ӵ���������ʽ
                {
                    Insert(post_list, PopOut(operator_list));
                }
                PopOut(operator_list);                                                  // ���������Ų�����
            }
            // ���򵯳������ջ�����бȵ�ǰ��������ȼ���(���ߵ���)���������ѹ��ǰ�����ʽջ
            // ֱ������ջ�ջ������ţ�
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

    while(operator_list->next)                                      // ��ʣ�������ջ�еķ����������ӵ���������ʽĩβ
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

Node *findNth(int loc, List *list)
{
    int length = getLength(list);
    Node *node = list;

    if (loc < 1 || loc > length)
    {
        return NULL;
    }

    for (int i = 0; i < loc; i++)
    {
        node = node->next;
    }

    return node;
}

// ɾ��ָ��λ���Ԫ�أ�������Ԫ��ֵ
char Delete(int loc, List *list)
{
    int length = getLength(list);
    if (loc < 1 || loc > length)
    {
        return '\0';
    }
    else
    {
        if (loc == 1)
        {
            Node *node = list->next;
            char returnValue = node->ch;
            list->next = node->next;
            free(node);
            return returnValue;
        }
        else if (loc == length)
        {
            Node *prior_node = findNth(length-1, list);
            Node *deletedNode = prior_node->next;
            char returnValue = deletedNode->ch;
            prior_node->next = NULL;
            free(deletedNode);
            return returnValue;
        }
        else
        {
            Node *priorNode = findNth(loc-1, list);
            Node *deletedNode = priorNode->next;
            char returnValue = deletedNode->ch;
            priorNode->next = deletedNode->next;
            free(deletedNode);
            return returnValue;
        }
    }
}

// ��ת����
void Reverse(List *list)
{
    int length = getLength(list);
    Node *node = list->next;
    if (length <= 1)
        return;
    for (int i = 1; i <= length; i++)
    {
        PushIn(Delete(i, list), list);
    }
    return;
}

int main(void)
{
    List *mid_list = CreateEmptyList();
    List *list;

    printf("��������׺����ʽ: \n");
    getInput_MidList(mid_list);
    printf("\n�������׺����ʽΪ: \n");
    PrintList(mid_list);
    list = getPostList(mid_list);
    printf("\nת��Ϊ��׺����ʽΪ: \n");
    PrintList(list);
    Reverse(list);
    printf("\nת��Ϊǰ׺����ʽΪ: \n");
    PrintList(list);

    system("pause");
    return 0;
}