#include <stdio.h>
int main(void)
{
	int START_CHAR = 'A';
	int character;
	int target_char;
	char target_num;
	int total_rows;
	int row;
	int blank;
	//int total_blank;
	int mid_char;

	printf("请输入一个大写字母：");
	scanf("%c", &target_num);

	target_char = target_num;
	total_rows = target_char - START_CHAR +1;
	

	for (row = 1; row <= total_rows; row++)
	{
		for (blank = 0; blank < (total_rows - row); blank++)
			printf(" ");
		
		for (character = START_CHAR,mid_char = START_CHAR + row - 1; character < mid_char; character++)
			printf("%c", character);
		printf("%c", mid_char);

		for (character = mid_char-1; character >=START_CHAR; character--)
			printf("%c", character);

		for (blank = 0; blank < total_rows - row; blank ++)
			printf(" ");

		printf("\n");
	}
	return 0;
}
