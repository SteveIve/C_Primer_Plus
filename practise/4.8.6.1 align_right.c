#include <stdio.h>
int main(void)
{
	char first[10];
	char last[10];

	printf("Enter your first name and yuour last name:\n");
	scanf("%s %s",&first,&last);
	printf("%s %s\n", first, last);
	printf("%*u %*u\n", strlen(first), strlen(first), strlen(last), strlen(last));
	return 0;
}