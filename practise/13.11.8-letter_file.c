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
            if (strlen(argv[1]) != 1)
            {
                fprintf(stderr, "Wrong parameter!\n");
                fprintf(stdout, "Please enter the correct parameter letter:\n");
                fscanf(stdin, "%c", &ch);
                while (getchar() != '\n')
                    continue;
            }
            fp = stdin;
            fprintf(stdout, "Now enter some contents:\n");
        }
    }
    ch = argv[1][0];
    if (strlen(argv[1]) != 1)
    {
        fprintf(stderr, "Wrong parameter!\n");
        fprintf(stdout, "Please enter the correct parameter letter:\n");
        fscanf(stdin, "%c", &ch);
        while (getchar() != '\n')
            continue;
    }
    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Wrong in opening file.\n");
        exit(EXIT_FAILURE);
    }
    int test;
    int count = 0;

    fprintf(stdout, "Calculating...\n");

    while ((test = getc(fp)) != EOF)
        if (test == ch)
            count++;
    fprintf(stdout, "There are %d '%c' letters in the contents.\n\n", count, ch);
    int i = 3;
    while (i < argc)
    {
        count = 0;
        if ((fp = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Wrong in opening the file.\n");
            exit(EXIT_FAILURE);
        }
        fprintf(stdout, "Next calculating...\n");
        while ((test = getc(fp)) != EOF)
            if (test == ch)
                count++;
        fprintf(stdout, "There are %d '%c' letters in the contents.\n\n", count, ch);
        i++;
    }
}