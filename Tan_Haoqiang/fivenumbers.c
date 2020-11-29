//p109
#include <stdio.h>
#include <math.h>
int main(void)
{
    int weishu(int);
    void single_num(int, int);
    void reverse(int);
    int num;                                        //num���������
    int a;
    printf("�����벻������λ��������:\n");
    scanf("%d", &num);
    while (num < 0 || num > 99999)
    {
        printf("����������������:\n");
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

    printf("�������%d��%dλ��\n", num_1, weishu);
    return weishu;
}

void single_num(int num, int weishu)
{
    int a;          //���ڴ�ŵ�������
    printf("�ֱ���:\t");
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
    printf("��������%d\n", reverse);
    return;
}