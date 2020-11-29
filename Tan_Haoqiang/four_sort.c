#include <stdio.h>
int main(void)
{
    void sort(int *, int);
    int num[4];
    printf("Please enter 4 num:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", num + i);                  // 尝试用指针计算
    }

    sort(num, 4);

    printf("排序后的数为：\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d  ", *(num + i));
    }
    putchar('\n');
    
    system("pause");
    return 0;
}

void sort(int * num, int len)                           // 选择排序法
{
    int temp;
    int i, j, k;
    for ( i = 0; i < len - 1; i++)
    {
        k = i;
        for (j = i + 1; j < len; j++)
        {
            if(num[j] < num[k])
            {
                k = j;
            }
        }
        if (num[i] != num[k])
        {
            temp = num[i];
            num[i] = num[k];
            num[k] = temp;
        }
    }
    return;
}