#include <stdio.h>
int main(void)
{
	int character = 'A';
	int row;
	int char_per_row;
	int limit = 'U';

	for (row = 1; character <=limit; row++)
	{
		for (char_per_row = 1; char_per_row <= row; character++, char_per_row++)
			printf("%c", character);
		printf("\n");
	}

	return 0;
}