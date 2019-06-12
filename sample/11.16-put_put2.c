#include <stdio.h>
#include <stdlib.h>

void put1(const char *);
int put2(const char *);

int main(void)
{
    put1("IF I'd as much money");
    put1(" as I could spend,\n");
    printf("I count %d characters.\n", put2("四个中文"));           //一个中文两个英文字符长度

    system("pause");
    return 0;
}

void put1(const char * string)
{
    while (*string)     //与*string != '\0' 相同
        putchar(*string++);
}

int put2(const char * string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return (count);
}