#include <stdio.h>
int main(void)          //p107
{
    float x, result;
    printf("������x��ֵ:\n");
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
    printf("���Ϊ: %.1f\n", result);

    system("pause");
    return 0;
}