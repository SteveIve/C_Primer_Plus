#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMELEN 81

int main(int argc, char * argv[])
{
    FILE * fp;
    int ch;

    if (argc < 3)
    {
        if (argc == 1)
        {
            fprintf(stdout, "Please enter the checking letter:\n");
            fscanf(stdin, "%c", &ch);
            while (getchar() != '\n')
                continue;
            fprintf(stdout, "Now enter the file name;")
        }
    }
}