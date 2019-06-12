#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define words "beast"
#define SIZE 40

int main(void)
{
    const char * orig = words;
    char copy[SIZE] = "Be the best you can be.";
    char * ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(copy);
    puts(ps);

    system("pause");
    return 0;
}