#include <stdio.h>      //p107
#include <math.h>
int main(void)
{
    int a;
    int result;
    printf("������һ��С��1000��������\n");
    scanf("%d", &a);
    while (a > 1000 || a < 0)
    {
        printf("�������ޣ�����������:\n");
        scanf("%d", a);
    }
    result = sqrt(a);
    printf("%d��ƽ����Ϊ%d\n",a,result);
    system("pause");
    return 0;
}