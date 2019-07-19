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
            char file_name[NAMELEN];
            fprintf(stdout, "Please enter the checking letter:\n");
            fscanf(stdin, "%c", &ch);
            while (getchar() != '\n')
                continue;
            fprintf(stdout, "Now enter the file name:\n");
            fscanf(stdin, "%s", file_name);
            while (getchar() != '\n')
                continue;
            if ((fp = fopen(file_name, "r")) == NULL)
            {
                fprintf(stderr, "Wrong in openging file.\n");
                exit(EXIT_FAILURE);
            }
        }
        if (argc == 2)
        {
            char file_name[NAMELEN];
            if (strlen(argv[1]) != 1)
            {
                fprintf(stderr, "Please enter the correct parameter letter:\n");
                fscanf(stdin, "%c", &ch);
                while (getchar() != '\n')
                    continue;
            }
            fprintf(stdout, "Please enter the file name:\n");
            fscanf(stdin, "%s", file_name);
            while (getchar() != '\n')
                continue;
            if ((fp = fopen(file_name, "r")) == NULL)
            {
                fprintf(stderr, "Wrong in opening file.\n");
                exit(EXIT_FAILURE);
            }
        }
    }
    if (argc == 3)
    {
        ch = argv[1][0];
        if (strlen(argv[1]) != 1)
        {
            fprintf(stderr, "Please enter the correct parameter letter:\n");
            fscanf(stdin, "%c", &ch);
            while (getchar() != '\n')
                continue;
        }
