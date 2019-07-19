#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 20
#define COLS 30
#define LEVELS 10
#define NAMELEN 81

const char trans[LEVELS + 1] = " .':~*=&@#";

void MakePic(int rows, int cols, int data[rows][cols], char pic[rows][cols]);
void init(int rows, int cols, char arr[rows][cols], char ch);
void makefile(int rows, int cols, char pic[rows][cols], char* filename);
void DealDistortion(int rows, int cols, int data[rows][cols]);

int main(void)
{
	int rows, cols;
	int data[ROWS][COLS];
	char pic[ROWS][COLS];
	char filename[NAMELEN];
	char picname[NAMELEN];
	FILE* fp;

	init(ROWS, COLS, pic, 'S');

	fprintf(stdout, "Enter the file name:\n");
	fscanf(stdin, "%s", filename);
	while (getchar() != '\n')
		continue;
	if ((fp = fopen(filename, "r")) == NULL)
	{
		fprintf(stderr, "Wrong in opening file.\n");
		exit(EXIT_FAILURE);
	}
	strncpy(picname, filename, NAMELEN - 5);
	picname[NAMELEN - 6] = '\0';
	strcat(picname, "_tran");
	//此处读入数据
	for (rows = 0; rows < ROWS; rows++)
		for (cols = 0; cols < COLS; cols++)
			fscanf(fp, "%d", &data[rows][cols]);
	if (ferror(fp))             //检查读入错误
	{
		fprintf(stderr, "Wrong in reading in the data.\n");
		exit(EXIT_FAILURE);
	}
	MakePic(ROWS, COLS, data, pic);

	for (rows = 0; rows < ROWS; rows++)
	{
		for (cols = 0; cols < COLS; cols++)
			putchar(pic[rows][cols]);
		putchar('\n');
	}

	makefile(ROWS, COLS, pic, picname);

	system("pause");
	return 0;
}

void init(int rows, int cols, char arr[rows][cols], char ch)
{
    int r, c;
    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            arr[r][c] = ch;
}
void MakePic(int rows, int cols, int data[rows][cols], char pic[rows][cols])
{
	int r, c;
	for (r = 0; r < rows; r++)
		for (c = 0; c < cols; c++)
			pic[r][c] = trans[data[r][c]];
}

void makefile(int rows, int cols, char pic[rows][cols], char* filename)
{
	FILE* fp;
	int r, c;

	if ((fp = fopen(filename, "w")) == NULL)
	{
		fprintf(stderr, "Wrong in creating pic file.\n");
		exit(EXIT_FAILURE);
	}
	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < cols; c++)
			putc(pic[r][c], fp);
		putc('\n', fp);
	}
}

void DealDistortion(int rows, int cols, int data[rows][cols])
{
	int up, down, left, right;
    for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < cols; c++)
		{
			
		}
	}
}