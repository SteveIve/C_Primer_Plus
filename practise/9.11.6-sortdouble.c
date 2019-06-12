#include <stdio.h>
#include <stdlib.h>
void sort_double(double *a, double *b, double *c);

int main(void)
{
    double x, y, z;
    x = 331815.690;
    y = 126939.7804;
    z = 631135.315;
    printf("Originally x = %lf, y = %lf, z = %lf.\n", x, y, z);
    sort_double(&x, &y, &z);
    printf("Now, x = %lf, y = %lf, z = %lf.\n", x, y, z);

    system("pause");
    return 0;
}

void sort_double(double *a, double *b, double *c)
{
    double max, middle, min;

    max = ((*a > *b ? *a : *b) > *c ? (*a > *b ? *a : *b) : *c);
    if (*a == max)
    {
        if (*b > *c)
        {
            middle = *b;
            min = *c;
        }
        else
        {
            middle = *c;
            min = *b;

        }
    }
    else if (*b == max)
    {
        if (*a > *c)
        {
            middle = *a;
            min = *c;
        }
        else
        {
            middle  = *c;
            min = *a;
        }
    }
    else if (*c == max)
    {
        if (*a > *b)
        {
            middle = *a;
            min = *b;
        }
        else
        {
            middle = *b;
            min = *a;
        }
    }

    *a = max;
    *b = middle;
    *c = min;
}