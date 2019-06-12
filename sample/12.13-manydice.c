#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "12.12-diceroll.h"

int main(void)
{
	int dice, roll;
	int sides;
	int status;

	srand((unsigned int)time(0));
	printf("Enter the number of sides per die, 0 to stop.\n");
	while (scanf_s("%d", &sides) == 1 && sides > 0)
	{
		printf("How many dice?\n");
		if ((status = scanf_s("%d", &dice)) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				puts("You should have entered an integer.");
				puts(" Let's begin again.");
				while (getchar() != '\n')
					continue;
				puts("How many sides? Enter 0 to stop.");
				continue;
			}
		}

		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
		printf("How many sides? Enter 0 to stop.\n");
	}
	printf("The rollem() function was called %d times.\n", roll_count);
	puts("GOOD FORTUNE TO YOU!");

	return 0;
}