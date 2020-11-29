//p109
#include <stdio.h>
#include <math.h>
int main(void)
{
    int weishu(int);
    void single_num(int, int);
    void reverse(int);
    int num;                                        //num是输入的数
    int a;
    printf("请输入不多于五位的正整数:\n");
    scanf("%d", &num);
    while (num < 0 || num > 99999)
    {
        printf("输入有误，重新输入:\n");
        scanf("%d", &num);
    }


    a = weishu(num);
    single_num(num, a);
    reverse(num);

    system("pause");
    return 0;
}

int weishu(int num)
{
    int num_1 = num;
    int weishu = 1;
    while (num / 10 != 0)
    {
        weishu ++;
        num /= 10;
    }

    printf("输入的数%d是%d位数\n", num_1, weishu);
    return weishu;
}

void single_num(int num, int weishu)
{
    int a;          //用于存放单个数字
    printf("分别是:\t");
    for (;weishu > 0; weishu--)
    {
        a = num / (int)pow(10, weishu - 1);
        printf("%d\t", a);
        num -= a * (int) pow(10, weishu-1);
    }
    printf("\n");
    return;
}

void reverse(int num)
{
    int reverse = 0;
    while (num > 0)
    {
        reverse *= 10;
        reverse += (num % 10);
        num /= 10;
    }
    printf("逆序数是%d\n", reverse);
    return;
}