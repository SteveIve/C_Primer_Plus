#include <stdio.h>
#include <stdlib.h>
#define size 10
int sum(int arr[], int n);

int main(void)
{
    int marbles[size] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
    long answer;

    answer = sum(marbles, size);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %lu bytes.\n", sizeof marbles);

    system("pause");
    return 0;
}

int sum(int arr[], int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++)
        total += arr[i];
    printf("The size of arr is %lu bytes.\n", sizeof arr);

    return total;
}