#include <stdio.h>      //p107
#include <math.h>
int main(void)
{
    int a;
    int result;
    printf("请输入一个小于1000的正数：\n");
    scanf("%d", &a);
    while (a > 1000 || a < 0)
    {
        printf("输入有无，请重新输入:\n");
        scanf("%d", a);
    }
    result = sqrt(a);
    printf("%d的平方根为%d\n",a,result);
    system("pause");
    return 0;
}