#include <stdio.h>          //p107
int main(void)
{
    int a, b, c, max;
    a = b = c = max = 0;
    printf("�����������������ö��Ÿ�����\n");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a > b)
        max = a;
    else
    {
        max = b;
    }
    if (c > max) max = c;
    printf("������%d\n", max);
    system("pause");
    return 0;
    
}