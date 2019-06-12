#include <stdio.h>
#include <stdlib.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];

    puts("Enter a string, please.");
    gets(words);                        //æ≠µ‰”√∑®
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");

    system("pause");
    return 0;
}