#include <stdio.h>
#include <stdlib.h>
#define NAMELEN 81

int main(int argc, char * argv[])
{
    FILE * f1, f2;
    char name_1[NAMELEN];
    char name_2[NAMELEN];
    int ch;

    if (argc == 3)
    {
        if ((f1 = fopen(argv[1], "r")) == NULL)
        {
            fprintf(stderr, "Wrong in opening the first file.\n");
            exit(EXIT_FAILURE);
        }
        if ((f2 = fopen(argv[2], "r")) == NULL)
        {
            fprintf(stderr, "Wrong in opening the second file.\n");
            exit(EXIT_FAILURE);
        }
    }
}