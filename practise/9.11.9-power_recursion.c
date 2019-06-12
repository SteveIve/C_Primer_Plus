#include <stdio.h>
#include <stdlib.h>
double power_recursion(double x, int power);

int main(void)
{
    double x;
    int power;

    printf("Enter a number and the interger power (Q to quit): ");
    while (scanf("%lf %d", &x, &power) == 2)
    {
        if (x == 0 && power == 0)
            printf("0 to the power 0 is undefined.\n");
        else if (x == 0)
            printf("0 to the power %d is 0.\n", power);
        else if (x == 1)
            printf("1 to the power %d is 1.\n", power);
        else if (power > 0)
            printf("%.3lf to the power %d is %.3lf.\n", x, power, power_recursion(x, power));
        else if (power < 0)
            printf("%.3lf to the power %d is %.3lf.\n", x, power, (1/power_recursion(x, (power * -1))));

        printf("Enter a number and the interger power (Q to quit): ");
    }
    printf("Done.\n");

    system("pause");
    return 0;
}

double power_recursion(double number, int power)
{
    if (power >= 2)
        return (number * power_recursion(number, (power - 1)));
    else
    {
        return number;
    }
    
}