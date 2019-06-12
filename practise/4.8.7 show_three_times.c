#include <stdio.h>
#include <float.h>

int main(void)
{
	double num1 = 1.0/3.0;
	float num2 = 1.0/3.0;
	printf("%.6f\n",num1);
	printf("%.12\n",num1);
	printf("%.16\n",num1);
	
	printf("%.6f\n",num2);
	printf("%.12f\n",num2);
	printf("%.16f\n",num2);

	printf(FLT_DIG);
	printf(DBL_DIG);

	return 0;
}