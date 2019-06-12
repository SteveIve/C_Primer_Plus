#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char * argv[])
{
    int choice;
    if (argv[1][1] == 'p' || argc == 1)
        choice = 1;
    else if (argv[1][1] == 'u')
    {
        choice = 2;
    }
    else if (argv[1][1] == 'l')
    {
        choice = 3;
    }

    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (choice == 1)
            putchar(ch);
        else if (choice == 2)
        {
            if (isalpha(ch))
            {
                putchar(toupper(ch));
                continue;
            }
            putchar(ch);
        }
        else if (choice == 3)
        {
            if (isalpha(ch))
            {
                putchar(tolower(ch));
                continue;
            }
            putchar(ch);
        }
    }

    system("pause");
    return 0;
}