#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define name "APPLE, INC."
#define address "101 Megabuck Plaza"
#define place "Magepolis, CA 94904"
#define width 40
#define space ' '

void show_n_char(char ch, int num);

int main(void)
{
    int spaces;

    show_n_char('*', width);
    putchar('\n');

    show_n_char(space, 16);
    printf("%s\n", name);
    
    spaces = (width - strlen(address)) / 2;
    show_n_char(space, spaces);
    printf("%s\n", address);

    show_n_char(space, (width - strlen(place)) / 2);
    printf("%s\n", place);

    show_n_char('*', width);
    putchar('\n');

    system("pause");

    return 0;
}

void show_n_char(char ch, int num)
{
    int count;

    for (count = 1; count <= num; count++)
        putchar(ch);
}