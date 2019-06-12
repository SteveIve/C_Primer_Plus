#include <stdio.h>

int main(void)
{
	char ch;
	char pre_char;
	int count = 0;

	printf("Enter some text, this program will count how many times \"ei\" appreared in the text.\n");
	printf("Enter # to quit.\n");

	while ( (ch = getchar())!='#')
	{
		if (ch == 'e')
			pre_char = ch;
		if ( pre_char == 'e' && ch == 'i')
			count++;
	}
	printf("\"ei\" appeared %d %s in the text.\n", count, count > 1?"times":"time");

	return 0;
}
