#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int ch_count = 0;
	int backspace = 0;
	int space = 0;

	printf("Enter some text:\n");
	printf("Enter # to quit.\n");

	while ((ch = getchar()) != '#')
	{
		if (isalpha(ch))
			ch_count++;
		else if ( ch == ' ')
			space++;
		else if ( ch == '\n')
			backspace++;
	}
	printf("There are %d alphabet %s in the text, %d space, %d return.\n", 
		ch_count, ch_count > 1 ? "characters" : "character", space, backspace);
	
	return 0;
}