#include <stdio.h>
#include <stdlib.h>
double min(double x, double y);

int main(void)
{
    double x = 1.1, y = 9.9;
    printf("X = %f and y = %f, the lesser is %f.\n", x, y, min(x, y));

    system("pause");
    return 0;
}

double min(double x, double y)
{
    return (x < y ? x : y);
}