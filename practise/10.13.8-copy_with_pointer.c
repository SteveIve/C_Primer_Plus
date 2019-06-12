#include <stdio.h>
#include <stdlib.h>
void show_array(double arr[], int n);
void copy_selected_elements(double sour_arr[], double tar_arr[], int start_index, int num);

int main(void)
{
    double sources[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
    double target[3];
    copy_selected_elements(sources, target, 2, 3);
    printf("The target array is the following:\n");
    show_array(target, 3);

    system("pause");
    return 0;
}

void show_array(double arr[], int n)
{
    int i;
    putchar('{');
    for (i = 0; i < n; i++)
        printf("%.1f, ", arr[i]);
    putchar('\b');putchar('\b');
    putchar('}');
    putchar('\n');
}

void copy_selected_elements(double sour_arr[], double tar_arr[], int start_index, int num)
{
    int i;
    int end = start_index + num;
    for (i = 0; start_index < end; start_index++, i++)
        tar_arr[i] = sour_arr[start_index];
}