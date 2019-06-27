#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_results(int sets, int dice_num, int sides);
int roll_dice(int dice_num, int sides);

int main(void)
{	
	srand((unsigned int)time(0));
	int sets;
	int sides;
	int dice_num;

	printf("Enter the number of sets; enter q to stop: ");
	while (scanf_s("%d", &sets) == 1)
	{
		printf("How many sides and how many dice: ");
		if (scanf_s("%d %d", &sides, &dice_num) == 2)
		{
			printf("Here are %d sets of %d %d-sides throws:\n", sets, dice_num, sides);
			show_results(sets, dice_num, sides);
			printf("How many sets? Enter q to quit: ");
			continue;
		}
		else
		{
			puts("Wrong! Try again! (Error code: 1)");
			printf("Enter the number of sets; enter q to stop: ");
			continue;
		}

	}
	puts("Done.");
    system("pause");
	return 0;
}

void show_results(int sets, int dice_num, int sides)
{
	int i_set;
	int rolled_num;
	int count = 0;

	for (i_set = 0; i_set < sets; i_set++)
	{
		rolled_num = roll_dice(dice_num, sides);
		printf("%2d ", rolled_num);
		count++;
		if (count % 5 == 0)
			putchar('\n');
	}
	putchar('\n');
}

int roll_dice(int dice_num, int sides)
{
	int total = 0;
	int dice = 0;
	while (dice < dice_num)
	{
		total += rand() % sides + 1;
		dice++;
	}
	return total;
}
