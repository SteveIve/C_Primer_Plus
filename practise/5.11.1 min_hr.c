#include <stdio.h>
#define M_PER_HR 60
int main(void)
{
	int min, hr, left;
	printf("Please enter minutes, and this program will convert it into "
		"hours and minutes.\n");
	printf("(Enter 0 to quit.)\n");
	scanf("%d", &min);

	
	while (min >0){
		hr = min/M_PER_HR;
		left = min % M_PER_HR;
		printf("%d min is %d hour(s) and %d min.\n", min, hr,left);
		printf("Enter another number?(0 to quit.)\n");
		scanf("%d", &min);
	}
	printf("Done!\n");

	return 0;
}
