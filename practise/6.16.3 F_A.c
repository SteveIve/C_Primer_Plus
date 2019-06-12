#include <stdio.h>
int main(void)
{
	int total_row = 'A';
	int row;
	int character = 'F';
//	int char_num;

	for (row = 'F'; row >= total_row; row--)
	{
		for (character = 'F'; character >= row; character--)
			printf("%c", character);
		printf("\n");
	}

	return 0;
}
