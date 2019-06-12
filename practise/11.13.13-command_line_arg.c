#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int count;

    for (count = argc-1; count > 0; count--)
        printf("%s ", argv[count]);
    putchar('\n');

    system("pause");
    return 0;
}