#include <stdio.h>
#include <stdlib.h>

void put1(const char *string)       //不会改变字符串
{
    while (*string != '\0')
        putchar(*string++);
}