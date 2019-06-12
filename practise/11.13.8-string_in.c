#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char * string_in(char * string1, char * string2);
char * s_gets(char *st, int n);

int main(void)
{
    char * string1[81];
    char * string2[81];
    int continue_flag = 1;
    char * find;

    while (continue_flag)
    {
        puts("Enter the first string:");
        s_gets(string1, 81);
        puts("Enter the second string:");
        s_gets(string2, 81);
        while (isspace(string1[0]) || isspace(string2[0]))
        {
            puts("Invalid input! Try again!");
            continue;
        }
        continue_flag = 0;
    }
    find = string_in(string1, string2);
    if (find)
        puts(find);
    else
        puts("Not Found.");
    
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
        while (st[i] != '\0' && st[i] != '\n')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}

char * string_in(char * string1, char * string2)
{
    char * first_same;
    int str2_len = strlen(string2);
    int str1_len = strlen(string1);
    int i, j;
    int find_flag = 0;
    for (i = 0, find_flag = 0; i < str1_len-str2_len -1; i++)
    {
        if (string2[0] == string1[i])
        {
            first_same = &string1[i];
            find_flag = 1;
            for (j = 0; j < str2_len; j++)
            {
                if (string1[i+j] != string2[j])
                {
                    find_flag = 0;
                    continue;
                }
            }
            if (find_flag)
                break;
        }
    }
    if (find_flag)
        return first_same;
    else
        return NULL;
}