#include <stdio.h>
#define G2L 3.785
#define M2KM 1.609
int main(void)
{
	float mileage, gas;

	printf("Please enter your mileage and the gas used:\n");
	scanf("%f %f", &mileage, &gas);
	printf("Your car can drive %.1f miles per gallon, which is %.1f litre per 100 kilometer.\n", mileage/gas, (gas*G2L)/(mileage*M2KM));

	return 0;
}