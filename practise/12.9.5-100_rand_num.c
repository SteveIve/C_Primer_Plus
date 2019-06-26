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

int get_a_rand(void)
{
	int random_num;
	random_num = rand() % 11;
	return random_num;
}

void sort(int arr[], int n)
{
	int min, first, second;
	for (first = 0; first < n - 1; first++)
	{
		min = first;
		for (second = first + 1; second < n; second++)
		{
			if (arr[second] < arr[min])
			{
				min = second;
			}
		}
		if (arr[min] < arr[first])
		{
			int temp;
			temp = arr[min];
			arr[min] = arr[first];
			arr[first] = temp;
		}
		else
			continue;
	}
	return;
}

void show_arr(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("The No.%d number is %d\n", i + 1, arr[i]);
	}
	return;
}

//5 is the mostly appeared number, which appeared 17 times. 