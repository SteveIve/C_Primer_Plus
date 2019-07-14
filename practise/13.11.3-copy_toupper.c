#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NAMELEN 81

int main(void)
{
    char name_source[NAMELEN];
    char name_dest[NAMELEN];
    int ch;
    FILE * fs;
    FILE * fd;

    puts("Enter the file name:");
    if (scanf("%s", name_source) != 1)
    {
        fprintf(stderr, "Wrong in entering the file name.\n");
        exit(EXIT_FAILURE);
    }
    strncpy(name_dest, name_source, NAMELEN - 4);
    strcat(name_dest, "_cpy");
    for (int i = 0; name_dest[i] != '\0'; i++)
        toupper(name_dest[i]);
    if ((fs = fopen(name_source, "r")) == NULL)
    {
        fprintf(stderr, "Wrong in opening the source file.\n");
        exit(EXIT_FAILURE);
    }
    if ((fd = fopen(name_dest, "w+")) == NULL)
    {
        fprintf(stderr, "Wrong in creating the destnated file.\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(name_source)) != EOF)
    {
        if (putc(toupper(ch), name_dest) == NULL)
        {
            fprintf(stderr, "Wrong in copying the words to the destinated file.\n");
            exit(EXIT_FAILURE);
        }
    }
    if (ferror(name_source) != 0)
    {
        fprintf(stderr, "Wrong in reading file %s.\n", name_source);
        exit(EXIT_FAILURE);
    }
    if (feof(name_dest) != 0)
    {
        fprintf(stderr, "Wrong in writing file %s.\n", name_dest);
        exit(EXIT_FAILURE);
    }
    puts("Done copying.");
    fclose(name_dest);
    fclose(name_source);

    system("pause");
    return 0;
}