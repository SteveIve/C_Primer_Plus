#include <stdio.h>
#include <math.h>
int main(void)
{
    int count = 0;

    puts("");
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                if (pow(i, 3) + pow(j,3) + pow(k,3) == (i*100 + j*10 + k))
                {  
                    count++;
                    printf("%d = %d^^3 + %d^^3 + %d^^3     ",(i*100 + j*10 + k), i, j, k);
                    if (count % 3 == 0)
                    {
                        printf("\n");
                    }
                }
            }
        }
    }

    puts("");
    system("pause");
    return 0;
}