#include <stdio.h>
int main(void)
{
    long profit;
    long commission;
    printf("Please enter the profit:\n");
    scanf("%ld", &profit);

    if (profit <= 100000)
    {
        commission = profit * 0.1;
    }
    else if (profit > 100000 && profit <= 200000)
    {
        commission = 100000 * 0.1 + (profit - 100000) * 0.075;
    }
    else if (profit > 200000 && profit <= 400000)
    {
        commission = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;
    }
    else if (profit > 400000 && profit <= 600000)
    {
        commission = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
    }
    else if (profit > 600000 && profit <= 1000000)
    {
        commission = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;
    }
    else if (profit > 1000000)
    {
        commission = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01;
    }

    printf("奖金总数为:%d\n", commission);
    system("pause");
    return 0;
}