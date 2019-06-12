#include <stdio.h>
int main(void)
{
	char first_name[10];
	char last_name[10];

	printf("Please enter your first name and your last name:\n");
	scanf("%s %s", first_name, last_name);
	printf("%s,%s\n", first_name, last_name);
	return 0;
}