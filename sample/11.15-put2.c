#include <stdio.h>
#include <stdlib.h>

int put2(const char * string)
{
    int count = 0;
    while (*string)     //常规用法
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return (count);
}