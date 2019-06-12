#include <stdio.h>
#include <stdlib.h>
#define months 12

int main(void)
{
    int days[months] = { 31, 28, [4] = 31, 30, 31, [1] = 29 };
    int i;

    for (i = 0; i < months; i++)
        printf("%2d  %d\n", i+1, days[i]);
    
    system("pause");
    return 0;
}