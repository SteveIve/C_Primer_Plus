#include <stdio.h>
int main(void)
{
	int true_value, false_value;

	true_value = (10 >1);
	false_value = (1>10);
	printf("The true value is %d, and the false value is %d.\n", true_value, false_value);
	return 0;
}
