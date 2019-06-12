#include <stdio.h>
#include <stdlib.h>
#define NAME "APPLE, INC."
#define ADDRESS "101 MEGABUCK PLAZA"
#define PLACE "MEGAPOLIS, CA 94904"
#define WIDTH 40

void starbar(void);

int main(void)
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();
    system("pause");
    return 0;
}

void starbar(void)
{
    int count;
    for (count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}