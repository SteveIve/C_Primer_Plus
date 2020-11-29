#include <stdio.h>          //p107
int main(void)
{
    int a, b, c, max;
    a = b = c = max = 0;
    printf("请输入三个整数，用逗号隔开：\n");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a > b)
        max = a;
    else
    {
        max = b;
    }
    if (c > max) max = c;
    printf("最大的是%d\n", max);
    system("pause");
    return 0;
    
}