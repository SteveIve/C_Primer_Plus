#include <stdio.h>
#include <stdlib.h>
void to_base_n(unsigned long number, int base);

int main(void)
{
    unsigned long number;
    int base;
    unsigned long changed_number;
    printf("输入你想转换的数，以及将转换至的进制。例如10转换至2进制，输入10 2，按Q退出:\n");
    while (scanf("%lu %d", &number, &base) == 2)
    {
        if (base <2 || base >10)
        {
            printf("请输入范围内（2~10）的进制数\n");
            printf("输入你想转换的数，以及将转换至的进制。例如10转换至2进制，输入10 2，按Q退出:\n");
            continue;
        }
        //changed_number = to_base_n(number, base);
        printf("%lu的%d进制数是\n", number, base);
        to_base_n(number, base);
        putchar('\n');
        printf("输入你想转换的数，以及将转换至的进制。例如10转换至2进制，输入10 2，按Q退出:\n");
    }
    printf("完成\n");

    system("pause");
    return 0;
}

void to_base_n(unsigned long number, int base)
{
    int r;

    r = number % base;
    if (number >= base)
        to_base_n(number/base, base);
    printf("%d", r);
}