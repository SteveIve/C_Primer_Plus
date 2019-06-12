#include <stdio.h>
int main(void)
{
	char first_name[10];
	char last_name[10];
	int space;

	printf("Please enter your first name and your last name:\n");
	scanf("%s %s", first_name, last_name);
	printf("Processing...\n");
	space = 20-(strlen(first_name)+strlen(last_name)+1);
	printf("\"%s %-*s\"\n", first_name, space, last_name);
	printf("00000000000000000000");
	return 0;
}
