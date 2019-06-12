#include <stdio.h>
#include <stdlib.h>
void get_array(int cols, int rows, double arr[cols][rows]);
double group_average(double ar[], int n);
double get_max(int cols, int rows, double arr[cols][rows]);
double average_of_all(int cols, int rows, double arr[cols][rows]);
 
int main(void)
{
    int average_time;
    double array[3][5];
    printf("Please enter 3 groups of number, ");
    printf("for each group 5 numbers in it.\n");
    get_array(3,5, array);
    for (average_time = 0; average_time < 3; average_time++)
        printf("The average of group %d is %.2f.\n", average_time + 1, group_average(array[average_time], 5));
    printf("The average of all is %.2f.\n",average_of_all(3,5,array));
    printf("The max value in the array is %.2f.\n", get_max(3, 5, array));
 
    system("pause");
    return 0;
}
 
void get_array(int cols, int rows, double arr[cols][rows])
{
   // int count=0;
    int i,j;
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            scanf("%lf", &arr[i][j]);
            //while (count++ < 15)
            // for (count = 0; count < 15; count++)
            //     scanf("%lf", ar[i][j]);
        }
            //scanf("%lf", ar[i][j]);
    }
}
 
double group_average(double arr[], int n)
{
    int i;
    double total;
    for (i = 0, total = 0; i < n; i++)
        total += arr[i];
 
    return (total/n);
}
 
double get_max(int cols, int rows, double arr[cols][rows])
{
    int i,j;
    double max = arr[0][0];
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
 
    return max;
}
 
double average_of_all(int cols, int rows, double arr[cols][rows])
{
    double total = 0;
    int i,j;
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
            total += arr[i][j];
    }
 
    return (total / (cols * rows));
}