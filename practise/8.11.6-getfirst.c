#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int get_first(void);

int get_first(void)
{
    int ch;
    ch = getchar();
    while (isblank(ch) || isspace(ch))
        {
            ch = getchar();
            continue;
        }

    return ch;
}


int main(void)
{
    int ch;
    ch = get_first();
    printf("%c", ch);

    system("pause");

    return 0;
}