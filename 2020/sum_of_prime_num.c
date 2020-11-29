#include <stdio.h>
#include <math.h>
int main(void)
{
    int isprime(int);
    int num, a, b;
    printf("Enter a num:\n");
    scanf("%d", &num);
    while (num < 2 || num % 2 != 0)
    {
        printf("Wrong, enter again:\n");
        scanf("%d", &num);
    }

    for (a = 2; a < num /2 + 1; a++)
    {
        b = num - a;
        if (isprime(a) && isprime(b))
        {
            printf("%d = %d + %d\n", num, a, b);
            system("pause");
            return 0;
        }
    }

    printf("Wrong.\n");
    system("pause");
    return 0;
}

int isprime(int num)
{
    int i;
    for (i = 2; i <(int)sqrt(num) + 1; i++)
    {
        if (num % i == 0)
        return 0;
    }
    return 1;
}