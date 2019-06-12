#include <stdio.h>
int main(void)
{
	char first[10], last[10];

	printf("Please enter your first name and your last name: \n");
	scanf("%s %s", first, last);
	printf("\" %s %s \"\n", first, last);

	return 0;
}