#include <stdio.h>
#include <stdlib.h>
void fibonacci(int number);

int main(void)
{
    int number;

    printf("How many Fibonacci numbers do you want? Enter Q to quit:\n");
    while (scanf("%ld", &number) == 1)
    {
        if (number < 1)
        {
            printf("Please enter the right number.\n");
            printf("How many Fibonacci numbers do you want? Enter Q to quit:\n");
            continue;
        }
        else
        {
            printf("Here are the %d Fibonacci numbers:\n", number);
            fibonacci(number);
            printf("How many Fibonacci numbers do you want? Enter Q to quit:\n");
        }
        
        
    }
    printf("Done.\n");

    system("pause");
    return 0;
}

void fibonacci(int number)
{
    int count;
    unsigned long fibonacci_pre = 1;
    unsigned long fibonacci_aft = 1;
    unsigned long fibonacci;
    if (number == 1)
    {
        printf("%ld\n", fibonacci_pre);
    }
    else if (number == 2)
    {
        printf("1\n1\n");
    }
    
    else
    {
        printf("1\n1\n");
        for (count = 1; count < number-1; count++)
        {
            fibonacci = fibonacci_pre + fibonacci_aft;
            fibonacci_pre = fibonacci_aft;
            fibonacci_aft = fibonacci;
            printf("%ld\n", fibonacci);
        }

    }
    
}