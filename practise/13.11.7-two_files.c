#include <stdio.h>
#include <stdlib.h>
#define NAMELEN 81

void show_file(FILE * file_name);

int main(int argc, char * argv[])
{
    FILE * f1,  *f2;
    char name_1[NAMELEN];
    char name_2[NAMELEN];

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

    if (argc != 3)
    {
        fprintf(stdout, "Please enter the name of the first file:\n");
        fscanf(stdin, "%s", name_1);
        while (getchar() != '\n')
            continue;
        fprintf(stdout, "Now enter thr name of the second file:\n");
        fscanf(stdin, "%s", name_2);
        while (getchar() != '\n')
            continue;
        
        if ((f1 = fopen(name_1, "r")) == NULL)
        {
            fprintf(stderr, "Wrong in opening the first file:\n");
            exit(EXIT_FAILURE);
        }
        if ((f2 = fopen(name_2, "r")) == NULL)
        {
            fprintf(stderr, "Wrong in opening the second file:\n");
            exit(EXIT_FAILURE);
        }
    }

    fprintf(stdout, "\nHere is the first file:\n");
    show_file(f1);
    fprintf(stdout, "\nHere is the second file:\n");
    show_file(f2);

    fclose(f1);
    fclose(f2);

    system("pause");
    return 0;
}

void show_file(FILE * file)
{
    int ch;

    while ((ch = getc(file)) != EOF)
    {
        putc(ch, stdout);
    }
    putchar('\n');
}