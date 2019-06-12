#include <stdio.h>
#include <stdlib.h>
int max_index(double arr[], int n);

int main(void)
{
    double arr[10] = { 1.1, 5.5, 3.3, 6.6, 7.7, 9.9, 2.2 };
    int max = max_index(arr, 10);
    printf("The max element in the arr is No.%d.\n", max + 1);
    printf("arr[%d] = %.1f\n", max, arr[max]);

    system("pause");
    return 0;
}

int max_index(double arr[], int n)
{
    double max = arr[0];
    int index;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }

    return index;
}