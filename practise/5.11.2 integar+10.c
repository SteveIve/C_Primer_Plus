#include <stdio.h>
#define PLUS 10
int main(void)
{
	int num, cpr;

	printf("Enter an integar, this program will print it until it plus ten.\n");
	scanf("%d", &num);
	cpr = num-1;
	printf("Here are the numbers:\n");

	while (cpr++<num+PLUS){
		printf("%d\t", cpr);
	}
	printf("\n");
	printf("Done!\n");
	return 0;
}
