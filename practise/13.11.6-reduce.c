#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMELEN 81

int main(void)
{
    FILE *in, *out;
    int ch;
    char name_in[NAMELEN];
    char name_out[NAMELEN];
    int count;

    fprintf(stdout, "Please enter the name of the file you want to reduce:\n");
    fscanf(stdin, "%s", name_in);
    while (getchar() != '\n')
        continue;
    if ((in = fopen(name_in, "r")) == NULL)
    {
        fprintf(stderr, "Wrong in opening the file \"%s\".\n", name_in);
        exit(EXIT_FAILURE);
    }
    strncpy(name_out, name_in, NAMELEN-9);
    name_out[NAMELEN-9] = '\0';
    strcat(name_out, ".red.txt");

    if ((out = fopen(name_out, "w")) == NULL)
    {
        fprintf(stderr, "Wrong in creating the copied file.");
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);
    
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files.\n");

    system("pause");
}