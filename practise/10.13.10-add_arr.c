#include <stdio.h>
#include <stdlib.h>
void show_array(int arr[], int n);

int main(void)
{
    int arr1[4] = {2, 4, 5, 8};
    int arr2[4] = {1, 0, 4, 6};
    int arr_added[4];
    int i;
    for (i = 0; i < 4; i++)
        arr_added[i] = arr1[i] + arr2[i];
    printf("The two arrays added to the following:\n");
    show_array(arr_added, 4);
    system("pause");
    return 0;
}

void show_array(int arr[], int n)
{
    printf("{");
    int i;
    for (i = 0; i < n; i++)
        printf("%d, ", arr[i]);
    printf("\b\b}\n");
}