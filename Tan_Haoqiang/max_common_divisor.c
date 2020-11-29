#include <stdio.h>
int main(void)
{
    void switch_num(int*, int*);
    int m, n;
    int temp;
    int m_1, n_1;
    int di, mul;

    printf("Please enter two numbers:\n");
    scanf("%d, %d", &m, &n);
    if (n > m)
    {
        switch_num(&n, &m);
    }

    m_1 = m;
    n_1 = n;

    while (m % n != 0)
    {
        m = m % n;
        if (n>m)
        {
            switch_num(&m, &n);
        }
    }

    di = n;
    mul = (n_1*m_1)/di;

    printf("%d与%d的最大公约数为%d, 最小公倍数为%d\n", m_1, n_1, di, mul);

    system("pause");
    return 0;
}

void switch_num(int *a, int *b)
{
    int temp;
    temp = *a, 
    *a = *b;
    *b = temp;
    return;
}