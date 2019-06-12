#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
int char_pos(int ch);

int main(void)
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (char_pos(ch) != -1)
        {
            printf("%c is the No.%d character in the alphabet.\n", ch, char_pos(ch));
        }
        else
        {
            printf("%c is not in the alphabet.\n", ch);
        }
        
    }
    printf("Done.\n");

    system("pause");
    return 0;
};

int char_pos(int ch)
{
    if (isalpha(ch))
    {
        return (tolower(ch) - 'a' + 1);
    }
    else
    {
        return -1;
    }
}