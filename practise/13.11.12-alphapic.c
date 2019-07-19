#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 20
#define COLS 30
#define LEVELS 10
#define NAMELEN 81

const char trans[LEVELS + 1] = " .':~*=&@#";

void MakePic(int data[][COLS], char pic[][COLS], int rows);
void init(char arr[][COLS], char ch);
void makefile(char pic[][COLS], int rows, char *filename);

int main(void)
{
    int rows, cols;
    int data[ROWS][COLS];
    char pic[ROWS][COLS];
    char filename[NAMELEN];
    char picname[NAMELEN];
    FILE * fp;

    init(pic, 'S');

    fprintf(stdout, "Enter the file name:\n");
    fscanf(stdin, "%s", filename);
    while (getchar() != '\n')
        continue;
    if ((fp = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "Wrong in opening file.\n");
        exit(EXIT_FAILURE);
    }
    strncpy(picname, filename, NAMELEN -5);
    picname[NAMELEN - 6] = '\0';
    strcat(picname, "_tran");
    //此处读入数据
    for (rows = 0; rows < ROWS; rows++)
        for (cols = 0; cols < COLS; cols++)
            fscanf(fp, "%d", &pic[rows][cols]);
    if (ferror(fp))             //检查读入错误
    {
        fprintf(stderr, "Wrong in reading in the data.\n");
        exit(EXIT_FAILURE);
    }
    MakePic(data, pic, 20);

    for (rows = 0; rows < ROWS; rows++)
    {
        for (cols  = 0; cols < COLS; cols++)
            putchar(pic[rows][cols]);
        putchar('\n');
    }

    makefile(pic, ROWS, picname);

    system("pause");
    return 0;
}

void init(char arr[rows][cols], char ch)
{
    int r, c;
    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            arr[r][c] = ch;
}