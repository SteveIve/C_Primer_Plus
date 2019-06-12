#include <stdio.h>
int main(void)
{
	const int ROW = 6;
	const int CHARS = 6;

	int row;
	char ch;

	for (row = 0; row<ROW; row++)
	{
		for (ch = ('A'+row); ch<('A' + CHARS); ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	return 0;
}