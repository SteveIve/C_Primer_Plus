#include <stdio.h>
#include <stdlib.h>

int calling_times;
void calling_counter(void);

int main(void)
{
	int i = 0;
	while (i++ < 100)
		calling_counter();
	printf("The function calling_counter() was called %d times.", calling_times);

	system("pause");
	return 0;
}

void calling_counter(void)
{
	calling_times++;
	return;
}