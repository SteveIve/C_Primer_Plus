#include <stdio.h>
int main(void)
{
    int num;
    int result = 0;
    long long answer = 0;
    int weishu;
    printf("输入数字:\n");
    scanf("%d", &num);
    printf("输入位数:\n");
    scanf("%d", &weishu);

    puts("");

    for (int i = 1; i < weishu + 1; i++)
    {
        result *= 10;
        result += num;
        printf("%d", result);
        if( i != weishu)
            printf("+");
        answer += result;
    }
    printf(" = %lld\n", answer);
    system("pause");
    return 0;
}