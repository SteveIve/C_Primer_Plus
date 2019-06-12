#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char * string, int size);
char * s_gets(char * st, int n);

int main(void)
{
    char * string[99];
    puts("Enter a string, this program will show you the reversed one.");
    s_gets(string, 99);
    reverse(string, 99);
    puts("The reversed string is:");
    puts(string);

    system("pause");
    return 0;
}

char * s_gets(char * st, int n)
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

void reverse(char * string, int size)
{
    char origin[size];
    int i, j;

    strcpy(origin, string);
    for (i = 0, j = strlen(origin) - 1; j >= 0; i++, j--)
    {
        string[i] = origin[j];
    }
    string[strlen(origin)] = '\0';
    return;
}