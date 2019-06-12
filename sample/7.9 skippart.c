#include <stdio.h>

int main(void)
{
	const float MIN = 0.0F;
	const float MAX = 100.0F;

	float score;
	float total = 0.0F;
	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("Enter the first score ( Q to quit):\n");
	while (scanf("%f", &score) == 1)
	{
		if (score < MIN || score > MAX)
		{
			printf("%.1f is an invalid value. Try again: ", score);
			continue;	//jump to the beginning of while
		}
		printf("Accepting %0.1f:\n", score);
		min = (score < min) ? score : min;
		max = (score > max) ? score : max;
		total += score;
		n++;
		printf("Enter next score ( Q to quit): ");
	}
	if (n>0)
	{
		printf("Average of %d scores is %0.1f.\n", n, total / n);
		printf("Low = %0.1f, high = %0.1f\n", min, max);
	}
	else
		printf("No valid scores were entered.\n");

	return 0;
}