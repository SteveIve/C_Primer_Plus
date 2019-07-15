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

    while (file_num < argc)
    {
        FILE * fs;
        if ((fs = fopen(argv[file_num], "r")) == NULL)
        {
            fprintf(stderr, "Wrong in opening file %s.\n", argv[file_num]);
            exit(EXIT_FAILURE);
        }
        while ((ch = getc(fs)) != EOF)
            putc(ch, stdout);
        putc('\n', stdout);
        putc('\n', stdout); //产生空行
        fclose(fs);
        if (argc -1 != file_num)   //如果不是最后一个文件，就显示“下一个文件”
            fprintf(stdout, "Here is the next file:\n");
        file_num++;
    }
    fprintf(stdout, "Done.\n");

    system("pause");
    return 0;
}