#include <stdio.h>
int main(void)
{
	char ch;

	while ( (ch = getchar()) != '#')
	{
		if (ch == '.')
			printf("!");
		else if (ch == '!')
			printf("!!");
		else
			putchar(ch);

	}
	printf("\n");
	return 0;
}