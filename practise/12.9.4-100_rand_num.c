#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_a_rand(void);
void sort(int arr[], int n);
void show_arr(int arr[], int n);

int main(void)
{
    int arr[100];
    int i = 0;

    puts("This program will show you 100 random numbers.");
    while (i < 100)
    {
        arr[i] = get_a_rand();
        i++;
    }
    sort(arr, 100);
    show_arr(arr, 100);

    system("pause");
    return 0;
}

int get_a_rand(void);
{
    int rand;
    rand = srand((unsigned long) time(0)) % 11;
    return rand;
}

void sort(int arr[], int n)