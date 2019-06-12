#include <stdio.h>
// fahrenheit centigrade kelvin
void Temperatures(float n); 
int main(void)
{
	float n;
	int flag;
	printf("Enter a temperature in fahrenheit: ");
	flag = scanf("%f", &n);
	while (flag == 1)
	{
		Temperatures(n);
		printf("Now enter another fah degrees ('q' to quit): ");
		flag = scanf("%f", &n);
	}
	printf("Done!\n");
	return 0;
}

void Temperatures(float n)
{
	printf("The %.2f fah degree(s) is %.2f centigrade degree(s) and %.2f kelvin degree(s).\n", n, 5.0/9.0*(n-32.0), (5.0/9.0*(n-32.0))+273.16);
}