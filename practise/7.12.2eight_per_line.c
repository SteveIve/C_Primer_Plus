#include <stdio.h>
int main(void)
{
	char ch;
	int char_count = 0;

	printf("Enter some text, it will be showed in \"alphabet\"-\"ASCII code\".\n");
	while (scanf("%c", &ch) != '#')
	{
		char_count++;
		printf("%c-%d    ", ch, ch);
		if (char_count % 8 == 0)
			printf("\n");
	}

	return 0;
}
