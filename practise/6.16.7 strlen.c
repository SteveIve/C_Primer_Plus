#include <stdio.h>
int main(void)
{
	int length;
	char word[20];

	printf("请输入一个单词：");
	scnaf("%s", &word);

	length = strlen(word);

	for (;length>=0; length--)
		printf("%c", word[length]);

	return 0;
}