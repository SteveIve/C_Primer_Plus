#include <stdio.h>

void setValue(int *x)
{
    *x = 1024;
    return;
}


int main(void)
{
    void setValue(int*);

    int x = 1;
    setValue(&x);
    printf("%d\n", x);

    system("pause");
    return 0;
}

