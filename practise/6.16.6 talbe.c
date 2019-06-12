#include <stdio.h>
int main(void)
{
	int start_num;
	int end_num;
	int row_num;

	printf("本程序用于计算数的平方及立方。\n");
	printf("请输入一个开始的数（整数）：");
	scanf("%d", &start_num);
	printf("现在请输入一个结束的数（整数）：");
	scanf("%d", &end_num);

	for (row_num = start_num; row_num <= end_num; row_num++)
	{
		printf("|%8d|%8d|%8d|", row_num, row_num*row_num, row_num*row_num*row_num);
		printf("\n");
	}

	return 0;
}
