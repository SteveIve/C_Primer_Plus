#include <stdio.h>
#include <stdlib.h>
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
        
    }
}