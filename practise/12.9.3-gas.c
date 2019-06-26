#include <stdio.h>
int set_mode(int mode, int last_mode);
void get_info(double * distance, double  * fuel, int last_mode);
void show_info(double distance, double fuel, int last_mode);

int main(void)
{
	int mode;
	int last_mode = 0;
	

	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		double distance, fuel;
		distance = fuel = 0;
		last_mode = set_mode(mode, last_mode);
		get_info(&distance, &fuel, last_mode);
		show_info(distance, fuel, last_mode);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf_s("%d", &mode);
	}
	printf("Done.\n");
	return 0;
}

int set_mode(int mode, int last_mode)
{
	if (mode == 1 || mode == 0)
		last_mode = mode;
	else
		printf("Invalid mode specified. Mode %d (%s) used.\n",
			last_mode, (last_mode == 0 ? "metric" : "US"));

	return last_mode;
}

void get_info(double * distance, double * fuel, int last_mode)
{										//这个函数可以用 ？ ：省略if语句
	if (last_mode == 0)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf_s("%lf", distance);
		printf("Enter fuel consumed in liters: ");
		scanf_s("%lf", fuel);
	}
	else if (last_mode == 1)
	{
		printf("Enter distance traveled in miles: ");
		scanf_s("%lf", distance);
		printf("Enter fuel consumed in gallons: ");
		scanf_s("%lf", fuel);
	}
	else
		puts("Wrong mode entered! (Error code 1)");
	return;
}

void show_info(double distance, double fuel, int last_mode)
{
	double info_me;
	double info_us;

	info_me = fuel / distance * 100;
	info_us = distance / fuel;

	if (last_mode == 0)
		printf("Fuel consumption is %.2f liters per 100 km.\n",
			info_me);
	else if (last_mode == 1)
		printf("Fuel consumption is %.1f miles per gallon.\n",
			info_us);
	else
		puts("Wrong! (Error code 2)");
	return;
}