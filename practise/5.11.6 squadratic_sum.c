#include <stdio.h>
int main(void)
{
	int days;
	int day = 0;
	int money = 0;

	printf("If you can earn the day number's square money, enter the number of days, this program will help you to calculate the sum.\n");
	scanf("%d", &days);

	while (day++ < days)
	{
		money = money + day*day;
	}
	printf("After %d days, you can earn $%d.\n", days, money);
	
	return 0;
}