#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 64

char** get_words(int words_num);
void show_words(char* arr[], int n);

int main(void)
{
	char** words;
	int words_num;
	int statu = 1;

	printf("How many words do you wish to enter? ");
	while (statu)
	{
		while (scanf("%d", &words_num) != 1)
		{
			puts("Wrong, try again. (Error code: 1)");
			printf("How many words do you wish to enter? ");
			continue;
		}
		if (words_num == 0)
		{
			statu = 0;
			break;
		}

		printf("Enter %d words now:\n", words_num);
		words = get_words(words_num);
		puts("Here are your words:");
		show_words(words, words_num);
		putchar('\n');
		printf("How many words do you wish to enter? (0 to quit): ");
		continue;
	}
	puts("Done.");

    system("pause");
	return 0;
}

char** get_words(int words_num)
{
	char** pointer_to_words;
	char* temp;
	int len;

	temp = (char*)malloc(size * sizeof(char*));
	for (int i = 0; i < words_num; i++)
	{
		scanf("%s", temp);
		len = strlen(temp);
		pointer_to_words[i] = malloc((len + 1) * sizeof(char));
		strncpy(pointer_to_words[i], temp, len);
	}
	free(temp);

	return pointer_to_words;
}

void show_words(char* arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%s\n", arr[i]);
	return;
}
