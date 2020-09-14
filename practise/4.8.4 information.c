#include <stdio.h>
int main(void)
{
	float height;
	char first[10];
	char last[10];

	printf("Please enter your height in inch:\n");
	scanf("%f", &height);
	printf("Please enter your full name:\n");
	scanf("%s %s", first, last);
	printf("Processing...\n");
	printf("%s, you are %.3f feet tall.\n", first, height);
	return 0;
}