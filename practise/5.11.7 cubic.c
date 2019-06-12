#include <stdio.h>
void cubic (float n);
int main (void)
{
	float n;
	printf("Enter a number, and this program will help you to calculate its cube.\n");
	scanf("%f", &n);
	cubic(n);
	return 0;
}

void cubic (float n)
{
	printf("The cube is %.3f.\n", n*n*n);
}