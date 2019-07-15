#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE * source, FILE * dest);

int main(int argc, char * argv[])
{
    FILE * fa;      //fs指向待新增文件，也就是第一个命令行参数。
                    //在循环里记得声明源文件文件指针
    int ch;
    int file_num = 2;

    if (argc <= 2)
    {
        fprintf(stderr, "Usage: %s [destinated file] [source file]\n", argv[0]);
        fprintf(stderr, "(tip: you may enter more than one source file.\n");
        exit(EXIT_FAILURE);
    }
    if ((fa = fopen(argv[1], "a+")) == NULL)
    {
        fprintf(stderr, "Wrong in opening the destinated file %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create the output buffer.\n", stderr);
        exit(EXIT_FAILURE);
    }

    fprintf(stdout, "First file appending...\n");

    while (file_num < argc)
    {
        FILE * fs;
        
        if (strcmp(argv[1], argv[file_num]) == 0)
        {
            fputs("Can't append file to itself.\n", stderr);

        }
        if ((fs = fopen(argv[file_num], "r")) == NULL)
        {
            fprintf(stderr, "Wrong in opening the source file %s.\n", argv[file_num]);
            exit(EXIT_FAILURE);
        }
        if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
        {
            fputs("Can't create input buffer.\n", stderr);
        }
        append(fs, fa);
        if (ferror(fs) != 0)
            fprintf(stderr, "Error in reading file %s.\n", argv[file_num]);
        if (ferror(fa) != 0)
            fprintf(stderr, "Error in writing file %s.\n", argv[1]);
        fprintf(fa, "\n\n");
        fclose(fs);
        file_num++;
        fprintf(stdout, "File %s appended.\n", argv[file_num]);
        if (argc - file_num != 1)
            fprintf(stdout, "Next file appendeding...\n");
    }
    fprintf(stdout, "Done appending. %d files appended.\n", argc - 2);
    rewind(fa);
    fprintf(stdout, "%s contents:\n", argv[1]);
    while ((ch = getc(fa)) != EOF)
        putc(ch, stdout);
    fprintf(stdout, "Done displaying.\n");
    fclose(fa);

    system("pause");
    return 0;
}

void append(FILE * source, FILE * dest)
{
    size_t bytes;
    static char temp[BUFSIZE];

    while (bytes = fread(temp, sizeof(char), BUFSIZE, source) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}