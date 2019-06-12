#include <stdio.h>
int main(void)
{
	float inches, centimeters;

	printf("Please enter your height in inches: ");
	scanf("%f", &inches);
	centimeters = inches * 2.54;
	printf("Your height in centimeter is %.2f.\n", centimeters);
	return 0;
}