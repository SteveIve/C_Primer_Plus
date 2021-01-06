#include <stdio.h>
int main(void)
{
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int *p = A;

    printf("%d\n", *(p++));
    printf("%d\n", *p);
    
    system("pause");
    return 0;
}