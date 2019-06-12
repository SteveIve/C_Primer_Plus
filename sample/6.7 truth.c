#include <stdio.h>
int main(void)
{
	int n = 3;

	while (n)
		printf("%2d is True.\n", n--);
	printf("%2d is False.\n", n);

	n = -3;
	while (n)
		printf("%2d is True.\n", n++);
	printf("%2d is False.\n", n);

	return 0;
}
