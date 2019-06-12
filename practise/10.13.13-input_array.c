#include <stdio.h>
#include <stdlib.h>
void get_array(double ar[][5], int n);
double group_average(double ar[], int n);
double get_max(double ar[][5], int n);
double average_of_all(double arr[][5], int n);

int main(void)
{
    int average_time;
    double array[3][5];
    printf("Please enter 3 groups of number, ");
    printf("for each group 5 numbers in it.\n");
    get_array(array, 3);
    for (average_time = 0; average_time < 3; average_time++)
        printf("The average of group %d is %.2f.\n", average_time + 1, group_average(array[average_time], 5));
    printf("The average of all is %.2f.\n",average_of_all(array, 3));
    printf("The max value in the array is %.2f.\n", get_max(array, 3));

    system("pause");
    return 0;
}

void get_array(double ar[][5], int n)
{
    int count=0;
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%lf", &ar[i][j]);
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

double get_max(double ar[][5], int n)
{
    int i,j;
    double max = ar[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (ar[i][j] > max)
            {
                max = ar[i][j];
            }
        }
    }

    return max;
}

double average_of_all(double ar[][5], int n)
{
    double total = 0;
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
            total += ar[i][j];
    }
    return (total / 15);
}