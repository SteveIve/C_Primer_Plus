#include <stdio.h>
#define hour_wage 10.00
#define extra_wage 15.00
#define rate1 0.15
#define rate2 0.2
#define rate3 0.25
double tax_calculator(double gross_salary);

int main(void)
{
	float hours;
	double total_salary;
	double tax;
	double net_income;

	printf("Enter your working hours, ");
	printf("and the program will calculate your salary and the tax.\n");

	while (scanf("%f", &hours) == 1 )
//	if (scanf("%f", &hours) == 1)
	{
		if (hours <= 0)
		{
			printf("You cannot enter this!\n");
			//scanf("%f",&hours);
		}
		else if (hours <= 40)
		{
			total_salary = hours * hour_wage;
			tax = tax_calculator(total_salary);
			net_income = total_salary - tax;
			printf("Total salary: $%7.2f\nTax: $%7.2f\nNet income: $%7.2f\n", total_salary, tax, net_income);
		}
		else 
		{
			total_salary = 40 * hour_wage + (hours - 40) * extra_wage;
			tax = tax_calculator(total_salary);
			net_income = total_salary - tax;
			printf("Total salary: $%7.2f\nTax: $%7.2f\nNet income: $%7.2f\n", total_salary, tax, net_income);
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
