#include <stdio.h>
int main(void)          //p107
{
    float x, result;
    printf("请输入x的值:\n");
    scanf("%f", &x);
    if ( x < 1)
    {
        result = x;
    }
    else if (x >= 1 && x < 10)
        result = 2 * x - 1;
    else
    {
        result = 3 * x - 11;
    }
    printf("结果为: %.1f\n", result);

    system("pause");
    return 0;
}