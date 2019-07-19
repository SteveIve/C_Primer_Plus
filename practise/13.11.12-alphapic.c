#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 20
#define COLS 30
#define LEVELS 10
#define NAMELEN 81

const char trans[LEVELS + 1] = " .':~*=&@#";

void MakePic(int data[][COLS], char pic[][COLS], int rows);
int init(char arr[][COLS], char ch);

int main(void)
{
    int rows, cols;
    int data[ROWS][COLS];
    char pic[ROWS][COLS];
    char filename[NAMELEN];
    char picname[NAMELEN];
    FILE * fp;

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
    
}