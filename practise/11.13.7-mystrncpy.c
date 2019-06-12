#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char * mystrncpy(char * st1, char * st2, int n);

int main(void)
{
    char string1[40];
    char string2[40];
    int continue_flag = 1;
    while (continue_flag)
    {
        puts("Enter the first string:");
        fgets(string1, 40, stdin);
        puts("Enter the second string:");
        fgets(string2, 40, stdin);
        while (isspace(string1[0]) || isspace(string2[0]))
        {
            puts("Invalid input! Try again!");
            continue;
        }
        continue_flag = 0;
    }
    printf("Originally, string1 is:\n%s\nand string2 is:\n%s\n", string1, string2);
    mystrncpy(string1, string2, 4);
    printf("Now, string1 is:\n%s\nand string2 is:\n%s\n", string1, string2);

    system("pause");
    return 0;
}

char * mystrncpy(char * st1, char * st2, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        st1[i] = st2[i];
    }
    st2[n] = '\0';
    return st1;
}