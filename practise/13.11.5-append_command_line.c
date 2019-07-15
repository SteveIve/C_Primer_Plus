#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE * source, FILE * dest);
char * s_gets(char *st, int n);

int main(int argc, char * argv[])
{
    FILE * fa;      //fs指向待新增文件，也就是第一个命令行参数。
                    //在循环里记得声明源文件文件指针
    int ch;
    int file_num = 1;

    if (argc <= 2)
    {
        fprintf(stderr, "Usage: %s [destinated file] [source file]\n", argv[0]);
        fprintf(stderr, "(tip: you may enter more than one source file.\n");
        exit(EXIT_FAILURE);
    }
    if ((fa = fopen(argv[1], "a+")) == NULL)
    {
        fprintf(stderr, "Wrong in opening the destinated file.\n");
        exit(EXIT_FAILURE);
    }
    
        
}