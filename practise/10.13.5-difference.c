#include <stdio.h>
#include <stdlib.h>
double difference(double arr[], int n);

int main(void)
{
    double arr[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
    double difference_value = difference(arr, 10);
    printf("The difference value of the max and min in the arr is %.2f.\n", difference_value);

    system("pause");
    return 0;
}

double difference(double arr[], int n)
{
    double max = arr[0];
    double min = arr[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    return (max - min);
}