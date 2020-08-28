#include <stdio.h>

_Bool test_prime(unsigned long long num);

int main(void)
{
    unsigned long long num = 0;
    unsigned long long prime_num = 0;
    _Bool flag;
    printf("Enter the number you want to test: ");
    while (scanf("%llu", &num) != 1 || num <= 1)
    {
        printf("There are something wrong with the number you entered, try again: ");
    }
    flag = test_prime(num);
    if (flag)
    {
        printf("%llu is a prime number.\n",num);
    }
    else
    {
        printf("%llu is not a prim number.\n", num);
        prime_num = num;
        while (!test_prime(prime_num))
        {
            prime_num++;
        }
        printf("The nearest primer number of %llu is %llu.\n", num, prime_num);
    }

    system("pause");
    return 0;
    
}

_Bool test_prime(unsigned long long number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}