#include <stdio.h>
#include <stdlib.h>

void put1(const char *string)       //����ı��ַ���
{
    while (*string != '\0')
        putchar(*string++);
}