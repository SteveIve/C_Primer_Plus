#include <stdio.h>
#include <stdlib.h>
void to_base_n(unsigned long number, int base);

int main(void)
{
    unsigned long number;
    int base;
    unsigned long changed_number;
    printf("��������ת���������Լ���ת�����Ľ��ơ�����10ת����2���ƣ�����10 2����Q�˳�:\n");
    while (scanf("%lu %d", &number, &base) == 2)
    {
        if (base <2 || base >10)
        {
            printf("�����뷶Χ�ڣ�2~10���Ľ�����\n");
            printf("��������ת���������Լ���ת�����Ľ��ơ�����10ת����2���ƣ�����10 2����Q�˳�:\n");
            continue;
        }
        //changed_number = to_base_n(number, base);
        printf("%lu��%d��������\n", number, base);
        to_base_n(number, base);
        putchar('\n');
        printf("��������ת���������Լ���ת�����Ľ��ơ�����10ת����2���ƣ�����10 2����Q�˳�:\n");
    }
    printf("���\n");

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