#include <stdio.h>
#define SIZE 26
int main(void)
{
	char alphabet[SIZE];
	char character='a';
	int index;

	for (index = 0; index<SIZE; index++, character++ )
	{
		alphabet[index] = character;
	}

	for (index = 0; index<SIZE; index++)
		printf("%c", alphabet[index]);
	printf("\n");

	return 0;
}