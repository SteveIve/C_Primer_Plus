#include <stdio.h>
#define rate1 0.15
#define rate2 0.2
#define rate3 0.25
#define wage1 8.75
#define wage2 9.33
#define wage3 10.00
#define wage4 11.20
#define extra_wage 1.5
#define line "**************************************************\n"
//#define blank "\t\t\t\t"

double tax_calculator(double gross_salary);
int table(void);

int table(void)
{
	printf(line);
	printf("Enter the number corresponding to the desired pay rate ro action:\n");
	printf("1) $%.2f/hr\t\t\t\t\t2) $%.2f/hr\n3) $%.2f/hr\t\t\t\t\t4) $%.2f/hr\n5) quit\n",wage1, wage2, wage3, wage4);
	printf(line);

	return 0;
}


int main(void)
{
	float base_wage;
	float hours;
	float total_wage;
	float tax;
	float net_wage;
	char num;

	table();

	while (scanf("%c", &num) == 1)
	{
		if (num == '\n')
			continue;
		switch(num)
		{
		case '1':
			base_wage = wage1;
			break;
		case '2':
			base_wage = wage2;
			break;
		case '3':
			base_wage = wage3;
			break;
		case '4': 
			base_wage = wage4;
			break;
		case '5':
			break;
		case 'q':
			break;
		default:
			printf("Please enter the correspondent number.\n");
			continue;
		}
		if (num == '5')
			break;
		if (num == 'q')
		{
			table();
			break;
		}

		printf("Please enter your working hours to calculate:\n");
		while (scanf("%f", &hours) == 1)
		{
			if (hours <= 0)
			{
				printf("Please enter a correct number.\n");
				continue;
			}
			else
			{
				if (hours <= 40)
					total_wage = hours * base_wage;
				else
					total_wage = 40 * base_wage + (hours - 40) * extra_wage * base_wage;
				tax = tax_calculator(total_wage);
				net_wage = total_wage - tax;

				printf(line);
				printf("Total salary: $%.2f\nTax: $%.2f\nNet income: $%.2f\n",total_wage, tax, net_wage);
				printf(line);
				printf("Enter a numer to continue,Q to quit.\n");
			}
		}
	}

	return 0;
}

double tax_calculator(double gross_salary)
{
	double tax;

	if (gross_salary <= 300)
		tax = gross_salary * rate1;
	else if (gross_salary > 300 && gross_salary <= 450)
		tax = 300 * rate1 + (gross_salary - 300)*rate2;
	else if (gross_salary > 450)
		tax = 300 * rate1 + 150 * rate2 + (gross_salary - 450) * rate3;

	return tax;
}
