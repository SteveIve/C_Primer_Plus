#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 64

void answer_words(int words_num);

int main(void)
{
	int words_num;
	puts("How many words do you wish to enter?");
	while (1)
	{
		while (scanf("%d", &words_num) != 1)
		{
			puts("Wrong, try again. (Error code: 1)");
			puts("How many words?");
			continue;
		}
		if (words_num == 0)
			break;
		answer_words(words_num);
		puts("How many words? (Enter 0 to quit):");
		continue;
	}
	system("pause");
	return 0;
}

void answer_words(int num)
{
	char ** words_array;
	char * temp;
	words_array = malloc(num * sizeof(char*));
	temp = malloc(size * sizeof(char));
	printf("Now enter the %d words:\n", num);
	for (int i = 0; i < num; i++)
	{
		scanf("%s", temp);					//scanf可以将空白符视为'\0'.
		words_array[i] = malloc((strlen(temp) + 1) * sizeof(char));
		strcpy(words_array[i], temp);
	}
	free(temp);
	puts("Here are your words:");
	for (int i = 0; i < num; i++)
	{
		puts(words_array[i]);
	}
	free(words_array);
}