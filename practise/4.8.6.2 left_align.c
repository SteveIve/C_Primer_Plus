#include <stdio.h>
int main(void)
{
	char first[10],last[10];

	printf("Please enter your first name and your last name:\n");
	scanf("%s %s", first, last);
	printf("Processing...\n");
	printf("%s %s\n", first, last);
	printf("%-*u %-*u\n",strlen(first), strlen(first), strlen(last), strlen(last));

	return 0;
}