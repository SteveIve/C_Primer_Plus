#include <stdio.h>
#define C_IN 0.3937
#define FT_IN 12
int main(void)
{
	float centimeter, inch, left;
	int ft;

	printf("Enter your height in centimeters: \n");
	printf("(enter 0 to quit.)\n");
	scanf("%f", &centimeter);
	while (centimeter > 0)
	{
		inch = centimeter * C_IN;
		ft = inch/FT_IN;
		left = inch - ft*FT_IN;
		printf("%-4.1f cm = %d feet, %-4.1f inches.\n", centimeter, ft, left);
		printf("Enter a height in centimeters (<=0 to quit): \n");
		scanf("%f", &centimeter);
	}
	printf("bye\n");
	return 0;
}
