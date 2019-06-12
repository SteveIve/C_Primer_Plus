#include <stdio.h>
#include <stdlib.h>
void show_arr(int arr[][5], int n);
void double_arr(int sour_arr[][5], int num);

int main(void)
{
    int source[3][5] = 
    {
        {65, 45, 60, 36, 98},
        {93, 21, 63, 46, 35},
        {92, 38, 43, 39, 66}
    };
    int doubled[3][5];
    printf("Originally, the array is the following:\n");
    show_arr(source, 3);
    double_arr(source, 3);
    printf("Now, the array is the following:\n");
    show_arr(source, 3);
    system("pause");
    return 0;
}

void double_arr(int sour_arr[][5], int num)
{
    int i,j;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < 5; j++)
            sour_arr[i][j] = (sour_arr[i][j] * 2);
    }
}

void show_arr(int arr[][5], int n)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        printf("{");
        for (j = 0; j < 5; j++)
            printf("%d, ", arr[i][j]);
        printf("\b\b}\n");
    }
}