#include <stdio.h>
//#include <stdbool.h>
int main(void)
{
	unsigned long num;
	unsigned long div;
	int isPrime;

	printf("Please enter an integer for analysis; ");
	printf("Enter Q to quit.\n");

	while (scanf("%lu",&num)==1)
	{
		for (div == 2, isPrime == 1; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if ( (div * div) != num)
				{
					printf("%lu is divisible by %lu and %lu.\n", num, div, num/div);
				}
				else
				{
					printf("%lu is divisible by %lu.\n", num, div);
				}
				isPrime = 0;
			}
		}

		if (isPrime == 1)
			printf("The number %lu is prime.\n", num);
		printf("Please enter another number to analysis; ");
		printf("Enter Q to quit.");
	}

	return 0;
}