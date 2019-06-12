#include <stdio.h>
#include <stdlib.h>
void show_2d_array(int cols, int rows, double arr[cols][rows]);
void copy_VLA(int cols, int rows,double sour_arr[][5], double tar_arr[cols][rows]);

int main(void)
{
    double sources[3][5] = 
    {
        {1.0, 2.0, 3.0, 4.0, 5.0},
        {1.1, 2.1, 3.1, 4.1, 5.1}, 
        {1.2, 2.2, 3.2, 4.2, 5.2}
    };
    int cols = 3;
    int rows = 5;
    double target[cols][rows];
    copy_VLA(cols, rows, sources, target);
    printf("The 2d array target has the following elements:\n");
    show_2d_array(cols, rows, target);
    system("pause");
    return 0;
}

void copy_VLA(int cols, int rows, double sour_arr[][5], double tar_arr[cols][rows])
{
    int i,j;
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
            tar_arr[i][j] = sour_arr[i][j];
    }
}

void show_2d_array(int cols, int rows, double arr[cols][rows])
{
    int i,j;
    for (i = 0; i < cols; i++)
    {
        printf("{");
        for (j = 0; j < rows; j++)
        {
            printf("%.1f, ", arr[i][j]);
        }
        printf("\b\b}\n");
    }
}