#include <stdio.h>
#include <stdlib.h>
extern unsigned int rand0(void);

int main(void)
{
    int count;
    for (count = 0; count < 5; count++)
        printf("%d\n", rand0());

    system("pause");
    return 0;
}