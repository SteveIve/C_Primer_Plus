#include <stdio.h>
#include "hotel.h"

int menu(void)
{
	int code, status;

	printf("\n%s%s\n", stars, stars);
	printf("Enter the number of the desired hotel:\n");
	printf("1) Fairfield Arms\t\t\t2) Hotel Olympic\n");
	printf("3) Chertworthy Plaza\t\t\t4) The Stockton\n");
	printf("5) quit\n");
	printf("%s%s\n", stars, stars);

	while ((status = scanf("%d", &code)) != 1 || (code < 1 || code>5))
	{
		if (status != 1)
			scanf("%*s");
		printf("Please enter an integer from 1 to 5.\n");
	}

	return code;
}

int getnights(void)
{
	int nights;

	printf("How many nights are needed? ");

	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");
		printf("Please enter an integer, such as 2.\n");
	}

	return nights;
}

void showprice(double rate, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;

	for (n = 1; n <= nights; n++, factor *= discount)
		total += rate * factor;
	printf("The total cost will be $%0.2f.\n", total);
}