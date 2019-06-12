#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isspace(ch)||isblank(ch))
            continue;
        else
        {
            count++;
        }
    }
   printf("%d",count);
//    system("pause");
    return count;
}