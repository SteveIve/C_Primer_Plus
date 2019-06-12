#include <stdio.h>
#define base1 17850
#define base2 23900
#define base3 29750
#define base4 14875
#define rate1 0.15
#define rate2 0.28
#define line "******************\n"

int main(void)
{
	char type;
	unsigned income;
	unsigned base;
	double tax;

	printf(line);
	printf("Enter the corresponding number to calculate your tax( Q to quit):\n");
	printf("1)Single\t2)householder\n3)married\t4)divorced\n");
	printf(line);

	while (scanf("%c", &type) == 1)
	{
		if (type == '\n')
			continue;
		switch(type)
		{
		case '1':
			base = base1;
			break;
		case '2':
			base = base2;
			break;
		case '3':
			base = base3;
			break;
		case '4':
			base = base4;
			break;
		case 'q':
			break;
		default:
			printf("Please enter the right number!\n");
			continue;
		}
		if (type == 'q')
			break;
		printf("Please enter your income to calculate( Q to quit):\n");
		while (scanf("%u", &income) == 1);
		{
			if ( income > base)
				tax = (base * rate1) + ( (income - base) * rate2);
			else
				tax = base * rate1;
			printf("Your tax is $%.2f according to your income.\n",tax);
			printf("Enter another income to continue, Q to quit.\n");
		}

	}
	printf("Done.\n");
	return 0;
}
