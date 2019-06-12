#include <stdio.h>
int main(void)
{
	float centimeters, inches;

	//inches = 2.54 * centimeters;

	printf("Enter an inch number,\nthis program will help you to change into centimeters:   ");
	scanf("%f",&inches);
	centimeters = inches * 2.54;
	printf("The centimeter number is: %f.\n", centimeters);
	return 0;
}
