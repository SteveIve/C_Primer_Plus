#include <stdio.h>
int main(void)
{
	char first_name[10];
	char last_name[10];
	int space;

	printf("Please enter your first name and your last name: \n");
	scanf("%s %s", first_name, last_name);
	space = strlen(first_name)+strlen(last_name)+1;
	printf("Processing...\n");
	printf("\"%*s %s\"\n",space, first_name, last_name);

	return 0;
}