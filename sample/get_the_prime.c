#include <stdio.h>

int check_prime(int checking_num);
int main(void)
{
	long unsigned num;
	long unsigned entered_num;
	int con;

	printf("����һ�����������ĳ�������һ����������õ������֮�������һ��������\n");
	printf("����һ��������ʼ���㡣\n");
	scanf("%lu", &entered_num);
	num = entered_num;
	while (check_prime(num) != 1)
		num++;
	if (num == entered_num)
		printf("�������%lu����һ��������\n", num);
	else if (num != entered_num)
		printf("%lu֮�������һ��������%lu��\n\n", entered_num, num);
	printf("����1����������һ��������");
	scanf("%d", &con);
	while (con == 1)
	{
		entered_num = num;
		num = num+1;
		while (check_prime(num) != 1)
			num++;
		printf("%lu֮�������һ��������%lu��\n\n", entered_num, num);
		printf("����1����������һ��������");
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

