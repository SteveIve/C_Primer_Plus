#include <stdio.h>
int main(void)
{
	int days;
	int day = 0;
	int money = 0;

	printf("If you can earn $1 a day, "
		"enter the number of days, "
		"and this program will help you to calculate how much you can earn.\n");
	scanf("%d", &days);
	while ( day++< days)
	{
		money = money+day;
	}
	printf("After %d days, you can earn $%d.\n", days, money);
	return 0;
}

