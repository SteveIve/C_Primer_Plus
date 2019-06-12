#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char * get_a_word(char * st, int n);

int main(void)
{
    char string[40];
    puts("Enter a string, and this program will show you the first word:");
    get_a_word(string, 40);
    puts(string);

    system("pause");
    return 0;
}

char * get_a_word(char * st, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        st[i] = getchar();
        while (isspace(st[0]))
            st[0] = getchar();
        if (st[i] == EOF)
            return NULL;
        if (isspace(st[i-1]) == 0 && isspace(st[i]))
        {
            st[i] = '\0';
            while (getchar() != '\n')
                continue;
            break;
        }
    }
    return st;
}