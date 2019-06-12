#include <stdio.h>

int check_prime(long unsigned checking_num);

int main(void)
{
	long unsigned entered_num;
	long unsigned checking_num;
	int count = 0;

	printf("Enter an integer, this program will show you all the prime number less than the number you entered.\n");
	while (scanf("%lu", &entered_num) == 1)
	{
		printf("There are the following prime number less than the number you entered:\n");
		for (checking_num = 2,count = 0; checking_num < entered_num; checking_num++)
		{
			
			
			
			if (check_prime(checking_num) == 1)
			{
				
				printf("%lu\t", checking_num);
				count++;
				if (count %5 == 0)
					printf("\n");
			};
		}

		if (count == 0)
			printf("There is no prime number less than the number you entered in.\n");
		printf("\nEnter another number to continue, Q to quit.\n");
	}

	return 0;

}

int check_prime(long unsigned checking_num)
{
	long unsigned div;
	int isPrime;

	for (div = 2,isPrime = 1; div*div <= checking_num; div++)
	{
		if ( checking_num % div == 0)
			isPrime = 0;
	}

	return isPrime;
}