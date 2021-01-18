#include <stdio.h>
#include <stdlib.h>
int list_length = 0;
typedef struct Char
{
    char ch;
    struct Char *next;
}CharNode, Mid_List, Post_List;

Mid_List *CreateEmptyMidList(void)
{
    Mid_List *mid_list = (Mid_List*)malloc(sizeof(mid_list));
    mid_list->ch = '\0';
    mid_list->next = NULL;
    list_length = 0;
    return NULL;
}

CharNode *getLastNode(Mid_List *mid_list)
{
    CharNode *node = mid_list;
    while (node->next)
    {
        node = node->next;
    }
    return node;
}

void Insert(CharNode *last_node, char ch)
{
    CharNode *new_node = (CharNode*)malloc(sizeof(CharNode));
    new_node->ch = ch;
    new_node->next = NULL;
    last_node->next = new_node;
    return;    
}

Mid_List *getInput_MidList(Mid_List *mid_list)
{
    CharNode *getLastNode(Mid_List*);
    
    CharNode *last_node = getLastNode(mid_list);
    int ch = getchar();
    while (ch != '\n')
    {
        Insert(last_node, ch);
    }
}