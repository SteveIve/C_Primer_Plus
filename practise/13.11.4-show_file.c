#include <stdio.h>
#include <stdlib.h>
#define NAMELEN 81

int main(int argc, char * argv[])
{
    int file_num = 1;
    int ch;

    if (argc == 1)
    {
        fprintf(stderr, "Usage: %s [file names]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fprintf(stdout, "Here is the first file entered in the command line:\n");

    while (file_num < argc - 1)
    {
        FILE * fs;
        if ((fs = fopen(argv[file_num], "r")) == NULL)
        {
            fprintf(stderr, "Wrong in opening file %s.\n", argv[file_num]);
            exit(EXIT_FAILURE);
        }
        while ((ch = getc(fs)) != EOF)
            putc(ch, stdout);
        fclose(fs);
        fprintf(stdout, "Here is the next file:\n");
        file_num++;
    }
    fprintf(stdout, "Done.\n");

    system("pause");
    return 0;
}