#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    unsigned long word_count, character_count;
    word_count = character_count = 0;
    int pre_ch,lat_ch;
    pre_ch = '\n';

    while ((lat_ch = getchar()) != EOF)
    {
        if (isalpha(lat_ch))
            character_count++;
        if (isspace(pre_ch) && isalpha(lat_ch))
            word_count++;
        pre_ch = lat_ch;

    }

    printf("There are %d characters and %d words.\n", character_count, word_count);
    system("pause");
    return 0;
}