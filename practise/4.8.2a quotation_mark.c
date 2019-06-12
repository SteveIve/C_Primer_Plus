#include <stdio.h>
int main(void)
{
	char f_n[10];
	char l_n[10];

	printf("Please enter your first name and your last name: \n");
	scanf("%s%s", f_n, l_n);
	printf("\"%s %s\"\n", f_n, l_n);
	return 0;
}