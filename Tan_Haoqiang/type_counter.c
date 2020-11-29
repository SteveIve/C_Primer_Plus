#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int num, alpha, blank, other;
    num = alpha = blank = other = 0;
    char str[999], ch;
    int index = 0;
    printf("Enter something:\n");
    scanf("%c", &ch);
    while (ch != '\n')
    {
        str[index++] = ch;
        scanf("%c", &ch);
    }
    
    for (int i = 0; *(str + i) != '\0'; i++)
    {
        if (isalpha(*(str + i)))
            alpha++;
        else if (isblank(*(str + i)))
            blank++;
        else if (isdigit(*(str + i)))
            num++;
        else
            other++;
    }

    printf("In the input, there are %d numbers, %d characters, %d spaces, and %d other characters.\n", num, alpha, blank, other);
    system("pause");
    return 0;
    
}