#include <stdio.h>
#include <stdlib.h>
void copy_2darr(double tar_arr[][4], double sour_arr[][4], int first_index, int sec_index);

int main(void)
{
    int index;
    double source[3][4] = 
    {
        {1.1, 2.2, 3.3, 4.4},
        {5.5, 6.6, 7.7, 8.8},
        {9.9, 10.10, 11.11, 12.12}
    };
    double target[3][4];

    for (index = 0; index < 3; index++)
    {
        copy_2darr(target, source, index, 4);
    }
    printf("target[1][1] = %.2f\n", target[1][1]);

    system("pause");
    return 0;
}

void copy_2darr(double tar_arr[][4], double sour_arr[][4], int first_index, int sec_index)
{
    int i;
    for (i = 0; i < sec_index; i++)
    {
        tar_arr[first_index][i] = sour_arr[first_index][i];
    }
}