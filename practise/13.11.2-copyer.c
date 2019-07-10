#include <stdio.h>
#include <stdlib.h>
#define NAMELEN 81

int main(int argc, char * argv[])
{
    char file_dest[NAMELEN];
    char file_source[NAMELEN];
    int ch;
    FILE * fs, * fd;

    if (argc != 3)          //命令行参数不为3时
    {
        fprintf(stderr, "Usage: %s [dest_file] [source_file]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fd = fopen(argv[1], "wb+")) == NULL || (fs = fopen(argv[2], "rb")) == NULL)
    {
        fprintf(stderr, "Wrong in opening dest/source file.\n");
        exit(EXIT_FAILURE);             //打开文件失败时
    }                                   //记得关文件

    while ((ch = getc(fs)) != EOF)
        putc(ch, fd);
    
    fclose(fd);
    fclose(fs);

    puts("Done");
    
    system("pause");
    return 0;
}