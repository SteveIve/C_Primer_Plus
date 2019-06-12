#include <stdio.h>
int main(void)	//参数错误的情况
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m);	//参数太多的情况
	printf("%d %d %d\n", n);	//参数太少的情况
	printf("%d %d\n", f, g);	//值的类型不匹配

	return 0;
}

	