#include <stdio.h>
#include <stdlib.h>

void get_random_arr(int arr[], int n, int seed);
void report(int arr[], int n, int seed);

int main(void)
{
	puts("This program will test the random array.");
	int times = 0;
	int arr[100];
	while (times < 10)
	{
		srand(times);
		get_random_arr(arr, 100, times);
		report(arr, 100, times);
		times++;
	}

    system("pause");
}

void get_random_arr(int arr[], int n, int seed)
{
	int i;
	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
}

void report(int arr[], int n, int seed)
{
	int arrcount[10] = { 0 };
	int i;
	for (i = 0; i < n; i++)
	{
		arrcount[arr[i] - 1]++;
	}
	printf("Under the seed %d:\n", seed);
	for (i = 0; i < 10; i++)
	{
		printf("The number %d appeared %d times in the array.\n", i, arrcount[i]);
	}
	putchar('\n');
	return;
}
