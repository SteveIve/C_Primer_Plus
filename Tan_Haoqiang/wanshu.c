#include <stdio.h>
int main(void)
{
    int sum(int);
    int num, count = 0;
    printf("1000以内的完数有:\n");
    for (num = 1; num < 1001; num++)
    {
        if (num == sum(num))
        {
            printf("%d its factors are ", num);
            for (int i = 1; i < num; i++)
            {
                if (num % i == 0)
                {
                    printf("%d, ", i);
                }
            }
            printf("\b\b\n");
        }
    }
    system("pause");
    return 0;
}

int sum(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    return sum;
}