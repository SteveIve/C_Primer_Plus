#include <stdio.h>
#include <stdlib.h>
#define size 4

int main(void)
{
    int some_data[size] = { 1492, 1066 };
    int i;

    printf("%2s%14s\n", "i", "some_data[i]");
    for (i = 0; i < size; i++)
        printf("%2d%14d\n", i, some_data[i]);
    
    system("pause");
    return 0;
}