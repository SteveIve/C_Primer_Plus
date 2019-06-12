#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char * get_limited_word(char * st, int lim);

int main(void)
{
    char string[40];
    puts("Enter a string, and this program will show you the first word with limited length:");
    get_limited_word(string, 3);
    puts(string);
    system("pause");
    return 0;
}

char * get_limited_word(char * st, int lim)
{
    int i;
    for (i = 0; i < lim; i++)
    {
        st[i] = getchar();
        while (isspace(st[0]))
            st[0] = getchar();
        if (st[i] == EOF)
            return NULL;
        if (isspace(st[i-1])== 0 && isspace(st[i]))
        {
            st[i] = '\0';
            while (getchar() != '\n')
                continue;
            break;
        }
        st[lim] = '\0';
    }
    return st;
}