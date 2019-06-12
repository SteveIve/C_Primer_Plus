#include <stdio.h>
#define artichoke 2.05
#define beet 1.15
#define carrot 1.09
#define discount 0.05
#define freight1 6.5
#define freight2 14
#define extra_freight 0.5
#define line "*******************************\n"

float freight_calculator(float weight);

int main(void)
{
	char type;
	float unit_price;
	float total_price;
	float entered_weight;
	float total_weight = 0;
	float freight;

	printf(line);
	printf("Welcome to the ABC store! What do you want to order?\n");
	printf("a)Artichoke\tb)Beet\nc)Carrot\tq)quit\n");
	printf(line);

	while (scanf("%c", &type) == 1)
	{
		if (type == '\n')
			continue;
		switch(type)
		{
		case 'a':
			unit_price = artichoke;
			break;
		case 'b':
			unit_price = beet;
			break;
		case 'c':
			unit_price = carrot;
			break;
		case 'q':
			break;
		default:
			printf("Please enter the right choice!\n");
			continue;
		}

		if (type == 'q')
			break;

		if (type == 'a')
			printf("Please enter the weight of the artichoke you want to order in pound:\n");
		else if (type == 'b')
			printf("Please enter the weight of the beet you want to order in pound:\n");
		else if (type == 'c')
			printf("Please enter the weight of the carrot you want to order in pound:\n");

		while (scanf("%f", &entered_weight) == 1)
		{
			if (entered_weight <= 0)
			{
				printf("Please enter the right weight.\n");
				continue;
			}
			total_weight += entered_weight;
			total_price = unit_price * total_weight;
			freight = freight_calculator(total_weight);
			if (total_price >= 100)
			{
				total_price *= discount;
				printf(line);
				printf("Here is your order info:\n");
				printf("Unit price: $%.2f\tOrder weight: %.2f pounds\nTotal price $%.2f\tDiscount: 5%%\nFreight&Package: $%.2f.\nYou need to pay: $%.2f.\n", unit_price,total_weight, unit_price * total_weight, freight, total_price+freight);
			}
			else
			{
				printf(line);
				printf("Here is your order info:\n");
				printf("Unit price: $%.2f\tOrder weight: %.2f pounds\nTotal price $%.2f\tFreight&Package: $%.2f.\nYou need to pay: $%.2f.\n", unit_price,total_weight, unit_price * total_weight, freight, total_price+freight);
				printf("Enter the weight to continue order, Q to quit.\n");
			}
		}
		

	}
	printf("Hope to see you again.\n");
	return 0;
}

float freight_calculator(float weight)
{
	float freight;

	if ( weight <= 5)
		freight = freight1;
	else if (weight <= 20)
		freight = freight2;
	else
		freight = freight1 + freight2 + (weight - 20) * extra_freight;

	return freight;
}
