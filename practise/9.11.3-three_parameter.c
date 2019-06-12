#include <stdio.h>
#include <stdlib.h>
void chline(char ch, int line, int row);
int getfirst(void);

int main(void)
{
    char ch;
    int line;
    int row;
    printf("Please enter a character");
    ch = getfirst();
    printf("Please enter thr line number and row number:");
    scanf("%d %d", &line, &row);
    chline(ch, line, row);

    system("pause");
    return 0;
}

void chline(char ch, int line, int row)
{
    int i,j;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= line; j++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}

int getfirst(void)
{
    int ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}
