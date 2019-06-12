#include <stdio.h>
int main(void)
{
	int quart;
	float number;

	printf("Enter the quart of water: ");
	scanf("%d", &quart);
	number = quart*950/3.0e-23;
	printf("%d quart of water contains about %e water molecules.\n", quart, number);
	return 0;
}