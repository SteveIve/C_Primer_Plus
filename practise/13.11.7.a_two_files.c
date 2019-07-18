#include <stdio.h>
#include <stdlib.h>
#define NAMELEN 81

void sh_tw_files(FILE * f1, FILE * f2);

int main(int argc, char * argv[])
{
    FILE * f1, * f2;
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
    else if (argc != 3)
    {
        fprintf(stdout, "Please enter the name of the first file:\n");
        fscanf(stdin, "%s", name_1);
        while (getchar() != '\n')
            continue;
        fprintf(stdout, "Now enter the name of the second file:\n");
        fscanf(stdin, "%s", name_2);
        while (getchar() != '\n')
            continue;
        
        if ((f1 = fopen(name_1, "r")) == NULL)
        {
            fprintf(stderr, "Wrong in opening the first file.\n");
            exit(EXIT_FAILURE);
        }
        if ((f2 = fopen(name_2, "r")) == NULL)
        {
            fprintf(stderr, "Wrong in opening the second file.\n");
            exit(EXIT_FAILURE);
        }
    }

    sh_tw_files(f1, f2);

    system("pause");
    return 0;
}

void sh_tw_files(FILE * f1, FILE * f2)
{
    char buf_1[NAMELEN];
    char buf_2[NAMELEN];
    int flag1, flag2;

    while ((flag1 = fgets(buf_1, NAMELEN-1, f1) != NULL || (flag2 = fgets(buf_2, NAMELEN-1, f2)) != NULL))
    {
        if (flag1 != NULL)
            fputs(buf_1, stdout);
        if (flag2 != NULL)
            fputs(buf_2, stdout);
    }
}