#include <stdio.h>
#include <stdlib.h>
#define size 4

int main(void)
{
    int value1 = 44;
    int arr[size];
    int value2 = 88;
    int i;

    printf("Value1 = %d, value2 = %d\n", value1, value2);
    for (i = -1; i <= size; i++)
        arr[i] = 2 * i + 1;

    for (i = -1; i < 7; i++)
        printf("%2d %d\n", i, arr[i]);
    printf("value1 = %d, value2 = %d\n", value1, value2);
    printf("address of arr[-1]: %p\n", &arr[-1]);
    printf("address of arr[4]: %p\n", &arr[4]);
    printf("address of value1: %p\n", &value1);
    printf("address of value2: %p\n", &value2);

    system("pause");
    return 0;
}