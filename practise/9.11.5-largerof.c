#include <stdio.h>
#include <stdlib.h>
void larger_of(double *x, double *y) {*x = *y = (*x > *y ? *x : *y);}

int main(void)
{
    double a = 652.564;
    double b = 8.888;
    printf("Originally a = %.5lf and b = %.5lf.\n", a, b);
    larger_of(&a, &b);
    printf("Now a = %.5lf and b = %.5lf.\n", a, b);

    system("pause");
    return 0;
}

