#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    int upper,lower;
    upper = lower = 0;

    printf("Enter some text, and this program ");
    printf("will tell you how many upper characters and ");
    printf("lower characters you entered.\n");
    printf("Enter ctrl+Z to report.\n");

    while ((ch = getchar())!=EOF)
    {
            if (isupper(ch))
                upper++;
            if (islower(ch))
                lower++;
        
    }
    printf("%d upper character\t\t%d lower character.\n", upper, lower);
    printf("Done.\n");
    system("pause");
    return 0;
}