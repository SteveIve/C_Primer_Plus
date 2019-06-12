#include <stdio.h>
#include <stdlib.h>
void copy_arr(double tar_arr[], double sour_arr[], int n);
void copy_ptr(double tar_arr[], double sour_arr[], int n);
void copy_ptrs(double tar_arr[], double sour_arr[], double * ptr);

int main(void)
{
    double sources[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, sources, 5);
    copy_ptr(target2, sources, 5);
    copy_ptrs(target3, sources, sources + 5);
    
    printf("target1[1] = %.2f\n", target1[1]);
    printf("target2[2] = %.2f\n", target2[2]);
    printf("target3[3] = %.2f\n", target3[3]);

    system("pause");
    return 0;
}

void copy_arr(double tar_arr[], double sour_arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        tar_arr[i] = sour_arr[i];
}

void copy_ptr(double tar_arr[], double sour_arr[], int n)
{
    int i;
    double * ptr_tar = tar_arr;
    double * ptr_sour = sour_arr;
    for (i = 0; i < n; i++)
        *(ptr_tar + i) = *(ptr_sour + i);
}

void copy_ptrs(double tar_arr[], double sour_arr[], double *ptr_end)
{
    double * ptr_tar = tar_arr;
    double * ptr_sour = sour_arr;
    for (;ptr_sour < ptr_end; ptr_sour++, ptr_tar++)
        *ptr_tar = *ptr_sour;
}