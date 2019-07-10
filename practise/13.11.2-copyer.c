#include <stdio.h>
#include <stdlib.h>
#define NAMELEN 81
#define BUF 4096

int main(int argc, char * argv[])
{
    char file_dest[NAMELEN];
    char file_source[NAMELEN];
    static char temp[BUF];
    FILE * fs, * fd;

    if (argc != 3)          //�����в�����Ϊ3ʱ
    {
        fprintf(stderr, "Usage: %s [dest_file] [source_file]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fd = fopen(argv[1], "wb+")) == NULL && (fs = fopen(argv[2], "rb")) == NULL)
    {
        fprintf(stderr, "Wrong in opening dest/source file.\n");
        exit(EXIT_FAILURE);             //���ļ�ʧ��ʱ
    }                                   //�ǵù��ļ�

    while (fgets(temp, BUF, fs) != NULL)
        fputs(temp, fd);
    
    fclose(fd);
    fclose(fs);

    puts("Done");
    
    system("pause");
    return 0;
}