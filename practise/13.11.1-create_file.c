#include <stdio.h>
#include <stdlib.h>
#define NAMELEN 81
#define SLEN 128

int main(void)
{
    char name[NAMELEN];
    char line[SLEN];
    FILE * fp;              //记得关文件
    puts("Enter the file name:");
    if (scanf("%s", name) != 1)
        puts("Wrong in file name.");
    if ((fp = fopen(name, "a+")) == NULL)
        puts("Wrong in opening file.");
    puts("Enter the contexts (empty line to quit):");
    while (fgets(line, SLEN, stdin) && line[0] != '\0')
    {
        fputs(line, fp);
    }
    fseek(fp, 0L, SEEK_SET);
    fprintf(stdout, "The file %s has the following contexts:\n", name);
    while (fgets(line, SLEN, fp) != EOF)
        fputs(line, stdout);
    fclose(fp);
    puts("Done.");

    system("pause");
    return 0;
}