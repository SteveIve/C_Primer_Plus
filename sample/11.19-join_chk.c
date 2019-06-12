#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Size 30
#define Bugsize 13
char *s_gets(char *st, int n);

int main(void)
{
    char flower[Size];
    char addon[] = "s smell like old shoes.";
    char bug[Bugsize];
    int available;

    puts("What is your favorite flower?");
    s_gets(flower, Size);
    if ( (strlen(addon) + strlen(flower) + 1 ) <= Size)
        strcat(flower, addon);
    puts(flower);
    puts("What is your favorite bug?");
    s_gets(bug, Bugsize);
    available = Bugsize - strlen(bug) - 1;
    strncat(bug, addon, available);
    puts(bug);

    system("pause");
    return 0;
}

char * s_gets(char *st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}