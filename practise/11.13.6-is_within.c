#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
bool is_within(char, char *);

int main(void)
{
    char ch;
    char * string[40];
    bool find;
    bool continue_flag = true;
    while (continue_flag)
    {
        puts("Enter a string:");
        fgets(string, 40, stdin);
        puts("Enter a char:");
        ch = getchar();
        if (ch == '\n' || string[0] == '\n')
        {
            puts("Invalid input! Try again!");
            continue;
        }
        continue_flag = false;
    }
    find = is_within(ch, string);
    if (find)
        printf("The char %c is within the string.\n", ch);
    else
        printf("The char %c is not in the string.\n", ch);

    system("pause");
    return 0;
}

bool is_within(char ch, char * st)
{
    int i = 0;
    while (st[i] != '\0')
    {
        if (st[i] == ch)
            return true;
        i++;
    }
    return false;
}