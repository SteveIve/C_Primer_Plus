#include <stdio.h>
void printN1(int n)
{
    for (int i = 1; i<=n; i++)
    {
        printf("%d", i);
    }
}

void printN2(int n)
{
    if(n)
    {
        printN2(n-1);
        printf("%d", n);
    }
}

void printN1(int);
void printN2(int);

int main(void)
{
    int n = 10000000;
    printN1(n);
    system("pause");
    return 0;
}