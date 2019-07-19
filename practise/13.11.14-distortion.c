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
int difference(int a, int b);

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
	DealDistortion(ROWS, COLS, data);
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
	int count;

    for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < cols; c++)
		{
			if (r == 0 || r == (rows -1) || c == 0 || c == (cols - 1))
				continue;
			up = data[r-1][c];
			down = data[r+1][c];
			left = data[r][c-1];
			right = data[r][c+1];

			count = 0;
			if (difference(data[r][c], up) > 1)
				count++;
			else 
				continue;

			if (difference(data[r][c], down) > 1)
				count++;
			else 
				continue;

			if (difference(data[r][c], left) > 1)
				count++;
			else 
				continue;

			if (difference(data[r][c], right) > 1)
				count++;
			else 
				continue;

			if (count == 4)
				data[r][c] = (int)((up + down + left + right) / 4);
		}
	}
}

int difference(int a, int b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);	
}