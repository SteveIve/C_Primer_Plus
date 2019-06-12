#include <stdio.h>
int main(void)
{
	char money = '$';
	int total_row = 5;
	int row;
	int char_num;

	for (row = 1; row<=total_row; row++)
	{
		for (char_num = 1; char_num <= row; char_num++)
		{
			printf("$");
		}
		printf("\n");
	}

	return 0;
}
