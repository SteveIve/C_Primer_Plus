#include <stdio.h>
int main(void)
{
	double num_1, num_2;
	double answer;

	printf("������һ����������");
	while (scanf("%f", &num_1) !=1)
		printf("������һ����������");
	printf("������ڶ�����������");
	while (scanf("%f", &num_2) != 1)
		printf("������ڶ�����������");
	answer = ( num_1 -  num_2)/( num_1 * num_2);

	printf("%.3lf", answer);

	return 0;
}
