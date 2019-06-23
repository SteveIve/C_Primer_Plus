#include <stdio.h>
int last_mode;
double distance;
double fuel;

void set_mode(int mode)
{
	extern int last_mode;
	if (mode == 1 || mode == 0)
		last_mode = mode;
	else
		printf("Invalid mode specified. Mode %d (%s) used.\n", last_mode,
		(last_mode == 0 ? "metric" : "US"));
	return;
}

void get_info(void)
{
	extern int last_mode;
	extern double distance;
	extern double fuel;

	if (last_mode == 0)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf_s("%lf", &distance);
		printf("Enter fuel consumed in liters: ");
		scanf_s("%lf", &fuel);
	}
	else if (last_mode == 1)
	{
		printf("Enter distance traveled in miles: ");
		scanf_s("%lf", &distance);
		printf("Enter fuel consumed in gallons: ");
		scanf_s("%lf", &fuel);
	}
	else
		puts("Wrong mode entered! (error code 1)");

	return;
}

void show_info(void)
{
	extern int last_mode;
	extern double distance;
	extern double fuel;
	double info_me;
	double info_US;

	info_me = fuel / distance * 100;
	info_US = distance / fuel;

	if (last_mode == 0)
		printf("Fuel consumption is %.2f liters per 100 km.\n", info_me);
	else if (last_mode == 1)
		printf("Fuel consumption is %.1f miles per gallon.\n", info_US);
	else
		puts("Wrong! (error code 2)");

	distance = fuel = 0;

	return;
}