#include <stdio.h>
int main(void)
{
	int start_num;
	int end_num;
	int row_num;

	printf("���������ڼ�������ƽ����������\n");
	printf("������һ����ʼ��������������");
	scanf("%d", &start_num);
	printf("����������һ��������������������");
	scanf("%d", &end_num);

	for (row_num = start_num; row_num <= end_num; row_num++)
	{
		printf("|%8d|%8d|%8d|", row_num, row_num*row_num, row_num*row_num*row_num);
		printf("\n");
	}

	return 0;
}
