#include <stdio.h>
int main(void)
{
	float flo_num;
	printf("Enter a number:____\b\b\b\b\b.");
	scanf("%f", &flo_num);
	printf("%.5f\n", flo_num);
	printf("%e\n", flo_num);
	return 0;
}
