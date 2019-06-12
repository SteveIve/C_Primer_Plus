#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int ch, pre_ch;
    int words_ct;
    int upper_ct;
    int lower_ct;
    int punct_ct;
    int num_ct;
    ch = pre_ch = words_ct = upper_ct = lower_ct = punct_ct = num_ct = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            upper_ct++;
        else if (islower(ch))
            lower_ct++;
        else if (ispunct(ch))
            punct_ct++;
        else if (isdigit(ch))
            num_ct++;
        else if (isalpha(pre_ch) && (ch == ' '))
            words_ct++;

        pre_ch = ch;
    }

    puts("In your input, counts as follow:");
    printf("%-4d%s\n", words_ct, (words_ct > 1 ? "words" : "word"));
    printf("%-4d%s\n", upper_ct, (upper_ct > 1 ? "upper characters" : "upper character"));
    printf("%-4d%s\n", lower_ct, (lower_ct > 1 ? "lower characters" : "lower character"));
    printf("%-4d%s\n", punct_ct, (punct_ct > 1 ? "punctuations" : "punctuation"));
    printf("%-4d%s\n", num_ct, (num_ct > 1 ? "numbers" : "number"));

    system("pause");
    return 0;
}