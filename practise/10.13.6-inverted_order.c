#include <stdio.h>
#include <stdlib.h>
void invertion(double arr[], int n);
void print_arr(double arr[], int n);
void put_the_max_at_beginning(double arr[], int n, int begin);

int main(void)
{
    double arr[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
    printf("Originally, the arr is: \n");
    print_arr(arr, 10);
    invertion(arr, 10);
    printf("Now, the arr is: \n");
    print_arr(arr, 10);

    system("pause");
    return 0;
}

void print_arr(double arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%.1f", arr[i]);
        putchar(' ');
    }
    putchar('\n');
}

void invertion(double arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        put_the_max_at_beginning(arr, 10, i);
    }
}

void put_the_max_at_beginning(double arr[], int n, int begin)
{
    double max = arr[n];
    double changed_number;
    int max_index = n - 1;
    int i;
    for (i = begin; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
        
    }
    changed_number = arr[begin];
    arr[begin] = max;
    arr[max_index] = changed_number;
}