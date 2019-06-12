#include <stdio.h>
#include <stdlib.h>
#define rate1 0.15
#define rate2 0.2
#define rate3 0.25
#define wagea 8.75
#define wageb 9.33
#define wagec 10.00
#define waged 11.20
#define extra_wage 1.5
#define starbar "*********************************************"

void table (void);
float wage_calculator(float working_time, float base);
double tax_caculator(double gross_salary);

void table (void)
{
    printf(starbar);
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("A> $%.2f/hr\t\t\t\tB> $%.2f/hr\n");
    printf("C> $%.2f/hr\t\t\t\tD> $%.2f/hr\n");
    printf("Q> quit\n");
    printf(starbar);
}

int main(void)
{
    float base_wage;
    float hours;
    float total_wage;
    float tax;
    float net_wage;
    char response;

    table();

    while (scanf("%c", &response) == 1)
    {
        if (response == '\n')
            continue;
        switch(response)
        {
            case 'a': 
                base_wage = wagea;
                break;
            case 'b':
                base_wage = wageb;
                break;
            case 'c':
                base_wage = wagec;
                break;
            case 'd':
                base_wage = waged;
                break;
            case 'q':
                break;
            default:
                printf("Please enter the correspondent number!\n");
                table();
                continue;
        }
        if (response == 'q')
            break;
        
        printf("Please enter your working hours to calculate:\n");
        while (scanf("%f", &hours) == 1)
        {
            if (hours <= 0)
            {
                printf("Please enter thr correct nubmer!\n");
                continue;
            }
            else
            {
                total_wage = wage_calculator(hours, base_wage);
                tax = tax_caculator(total_wage);
                net_wage = total_wage - tax;

                printf(starbar);
                printf("Total salary: $%.2f\nTax: $%.2f\nNet income: $%.2f\n",total_wage, tax, net_wage);
                printf(starbar);
            }
            
        }
    }
    system("pause");
    return 0;
}

float wage_calculator(float working_time, float base)
{
    float total;

    if (working_time <= 40)
        total = working_time * base;
    else
    {
        total = 40 * base + (working_time - 40) * extra_wage * base;
    }

    return total;
    
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