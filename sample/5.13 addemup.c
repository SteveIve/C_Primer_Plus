#include <stdio.h>
int main(void)
{
	int count, num;

	count = num = 0;
	while (count++<20){
		num += count;
	}
	printf("The sum is %d.\n", num);

	return 0;
}
