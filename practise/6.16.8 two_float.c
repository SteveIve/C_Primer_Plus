#include <stdio.h>
int main(void)
{
	double num_1, num_2;
	double answer;

	printf("请输入一个浮点数：");
	while (scanf("%f", &num_1) !=1)
		printf("请输入一个浮点数：");
	printf("请输入第二个浮点数：");
	while (scanf("%f", &num_2) != 1)
		printf("请输入第二个浮点数：");
	answer = ( num_1 -  num_2)/( num_1 * num_2);

	printf("%.3lf", answer);

	return 0;
}
