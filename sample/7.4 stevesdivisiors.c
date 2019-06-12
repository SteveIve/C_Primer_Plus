#include <stdio.h>

int main(void)
{
	long unsigned num;
	long unsigned div;
	int isPrime;

	printf("Please enter an integer for analysis; ");
	printf("Enter Q to quit.\n");
	while (scanf("%lu",&num) == 1)
	{
		for (div = 2, isPrime = 1; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if ( div * div != num)
					printf("The number %lu is divisible by %lu and %lu.\n", num, div, num/div);
				else
					printf("The number %lu is divisible by %lu.\n", num, div);
				isPrime = 0;
			}
		}
		if (isPrime == 1)
			printf("The number %lu is prime.\n", num);
		printf("Please enter another integer for analysis; ");
		printf("Enter Q to quit.\n");
	}
	printf("Bye!\n");
	return 0;
}