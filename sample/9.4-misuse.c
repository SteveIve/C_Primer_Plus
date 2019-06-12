#include <stdio.h>
#include <stdlib.h>

int max();

int main(void)
{
    printf("The maximum of %d and %d is %d.\n", 3, 5, max(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, max(3.0, 5.0));
    system("pause");
    return 0;
}

int max(n, m)
{
    return (n>m?n:m);
}