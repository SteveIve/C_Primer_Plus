#include <stdio.h>
#include <stdlib.h>
char * strchar(char * st, char ch);

int main(void)
{
    char string[40];
    char ch;
    int continue_flag = 1;
    char * find;
    while (continue_flag)
    {
        puts("Enter a string:");
        fgets(string, 40, stdin);
        puts("Enter a char:");
        ch = getchar();
        while (getchar() != '\n')
            continue;
        continue_flag = 0;
    }
    find = strchar(string, ch);
    if (find)
    {
        printf("The char is the No.%d in the string.\n",(find - string + 1));
    }
    else
    {
        printf("There is no %c in the string.\n", ch);
    }

    system("pause");
    return 0;
}

char * strchar(char * st, char ch)
{
    int i = 0;
    while (st[i] != '\0')
    {
        if (ch == st[i])
            return (&st[i]);
        i++;
    }
    return NULL;
}