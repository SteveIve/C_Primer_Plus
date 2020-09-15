#include <stdio.h>
#define D_T_W 7
int main(void)
{
	int day, week, left;

	printf("Enter the number of days, this program will convert to weeks and days.\n");
	printf("(Enter 0 to quit.)\n");
	scanf("%d", &day);

	while (day>0){
		week = day/D_T_W;
		left = day % D_T_W;
		printf("%d is %d week(s) and %d day(s).\n", day, week, left);
		printf("Enter another number to continue(0 to quit).\n");
		scanf("%d", &day);
	}
	printf("Done!\n");
	system("pause");
	
	return 0;
}
