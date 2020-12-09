#include <stdio.h>
int main(void)
{
    short A[7] = {1, 2, 3, 4, 5, 6, 7};
    short *p = A;

    printf("%d", *(p + 2));
    system("pause");
    return 0;
}