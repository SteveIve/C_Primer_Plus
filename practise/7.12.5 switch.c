#include <stdio.h>

int main(void)
{
	char ch;
	int shift = 0;

	while ( (ch = getchar()) != '#')
	{
		switch(ch)
		{
		case '.':
			printf("!");
			shift++;
			continue;
		case '!':
			printf("!!");
			shift++;
			continue;
		}
		putchar(ch);
	}
	printf("\n");
	printf("There %s %d %s.\n", shift>1?"are":"is", shift, shift>1?"shifts":"shift");
	return 0;
}

			
