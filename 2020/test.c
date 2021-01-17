#include <stdio.h>
#include <stdlib.h>
#define maxsize 9999

typedef struct S1
{
    double arr[maxsize];
    struct S1 *next;    
}MK;

int insert(MK *mk)
{
    MK *node = malloc(sizeof(MK));
    if (!node)
    {
        return 0;
    }
    else
    {
        node->next = mk;
        mk = node;
        return 1;
    }
    
}

int main(void)
{
    MK *memorry_killer = malloc(sizeof(MK));
    int i = 1;
    while (i)
    {
        i = insert(memorry_killer);
    }

    printf("ÄÚ´æºÄ¾¡¡£\n");
    system("pause");
    return 0;
}