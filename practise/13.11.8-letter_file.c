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
            fprintf(stdout, "Please enter the parameter letter:\n");
            fscanf(stdin, "%c", &ch);
            while (getchar() != '\n')
                continue;
            fp = stdin;
            fprintf(stdout, "Now enter some contents:\n");
        }
        if (argc == 2)
        {
            
        }
    }
}