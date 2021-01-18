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

Mid_List *getInput_MidList(Mid_List *mid_list, CharNode *last_node)
{
    
}