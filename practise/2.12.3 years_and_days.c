#include <stdio.h>
int main(void)
{
	int days, years;

	years = 20;
	days = 365 * years;

	printf("I'm %d years old.\nI'm %d days old.\n", years, days);
	return 0;
}