#include <stdio.h>

int check_prime(int checking_num);
int main(void)
{
	long unsigned num;
	long unsigned entered_num;
	int con;

	printf("这是一个计算质数的程序，输入一个数，将会得到这个数之后最近的一个质数。\n");
	printf("输入一个整数开始计算。\n");
	scanf("%lu", &entered_num);
	num = entered_num;
	while (check_prime(num) != 1)
		num++;
	if (num == entered_num)
		printf("你输入的%lu就是一个质数！\n", num);
	else if (num != entered_num)
		printf("%lu之后最近的一个质数是%lu。\n\n", entered_num, num);
	printf("输入1继续计算下一个质数。");
	scanf("%d", &con);
	while (con == 1)
	{
		entered_num = num;
		num = num+1;
		while (check_prime(num) != 1)
			num++;
		printf("%lu之后最近的一个质数是%lu。\n\n", entered_num, num);
		printf("输入1继续计算下一个质数。");
		scanf("%d", &con);
	}
	
	return 0;
}

int check_prime(long unsigned checking_num)
{
	long unsigned div;
	int isPrime;

	for (div = 2, isPrime = 1; (div * div) <= checking_num; div++)
	{
		if (checking_num % div == 0)
			isPrime = 0;
	}

	return isPrime;
}

