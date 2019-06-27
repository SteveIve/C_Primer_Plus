#include <stdio.h>
#include <stdlib.h>

int* make_array(int elem, int val);
void show_array(const int ar[], int n);
int main(void)
{
	int* pa;
	int size;
	int value;

	printf("Enter the number of elements: ");
	while (scanf_s("%d", &size) == 1 && size > 0)
	{
		printf("Enter the initialization value: ");
		scanf_s("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements ( <1 to quit): ");
	}
	puts("Done.");

	system("pause");
	return 0;	
}

int* make_array(int elem, int val)
{
	int* ptr = malloc(elem * sizeof(int));
	for (int i = 0; i < elem; i++)
	{
		ptr[i] = val;
	}
	return ptr;
}

void show_array(const int ar[], int n)
{
	int count = 0;
	puts("The elemenets in the array are the following:");
	for (int i = 0; i < n; i++)
	{
		printf("%4d ", ar[i]);
		count++;
		if (count % 5 == 0)
			putchar('\n');
	}
	putchar('\n');
	return;
}