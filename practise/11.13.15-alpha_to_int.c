#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define size 99
int alpha_to_int(char * string);

int main(void)
{
    char string[size];
    char * find;
    puts("Enter a number in a string:");
    fgets(string, size, stdin);
    find = strchr(string, '\n');
    if (find)
        *find = '\0';
    printf("The number is %d\n", alpha_to_int(string));

    system("pause");
    return 0;
}

int alpha_to_int(char * string)
{
    int num = 0;

    while (*string)
    {
        num *= 10;
        if (!isdigit(*string))
            return 0;
        num += *string - '0';
        string++;
    }
    return num;
}