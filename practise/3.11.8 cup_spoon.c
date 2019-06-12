#include <stdio.h>
int main(void)
{
	float pint, cup, ounce, big_spoon, small_spoon;

	printf("Enter the number of cup: ");
	scanf("%f",&cup);
	pint = cup/2;
	ounce = cup*8;
	big_spoon = ounce*2;
	small_spoon = big_spoon*3;
	printf("%.1f cups water is %.1f pints, %.1f ounces, %.1f big spoons, %.1f small spoons.\n", cup, pint, ounce, big_spoon, small_spoon);
	return 0;
}