#include <stdio.h>
int main(void)
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
            continue;
        if (ch <= ' ')
        {
            if (ch == 9)
                printf("\\t\t%d\n",ch);
            else if (ch == 10)
                printf("\\n\t%d\n",ch);
            else
                printf("^%c\t%d\n",ch+64,ch);
            count++;
        }
        else
        {
            printf("%c\t%d\n",ch,ch);
            count++;
        }
        if (count % 10 == 0)
            putchar('\n');   
    }

    return 0;
}