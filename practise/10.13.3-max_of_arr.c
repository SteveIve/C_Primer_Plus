#include <stdio.h>
#include <stdlib.h>
int max_of_arr(int arr[], int n);

int main(void)
{
    int arr[10] = {51,87,656,69,859,656,564,565,8};
    int max = max_of_arr(arr, 10);
    printf("The max value of the arr is %d\n", max);

    system("pause");
    return 0;
}

int max_of_arr(int arr[], int n)
{
    int max = arr[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}