#include <stdio.h>
int main(void)
{
	float age, seconds;

	printf("Please enter your age: \n");
	scanf("%f", &age);
	seconds = age*3.156e7;
	printf("You are %.2f seconds old.\n", seconds);
	return 0;
}