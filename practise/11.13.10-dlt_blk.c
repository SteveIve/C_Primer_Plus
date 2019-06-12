#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 40
void dlt_blk(char * string);

int main(void)
{
    char string[size];
    char * find;
    puts("Enter a string, this program will help you to delete all the blank:");
    fgets(string, size, stdin);
    find = strchr(string, '\n');
    if (find)
        *find = '\0';
    while (string[0] != '\n' && string[0] != '\0')
    {
        dlt_blk(string);
        puts(string);
        puts("Enter a string to continue, press return to quit.");
        fgets(string, size, stdin);
        find = strchr(string, '\n');
        if (find)
            *find = '\0';
    }

    puts("Bye!");
    
    system("pause");
    return 0;
}

void dlt_blk(char * string)
{
    char origin[size];
    int i = 0;
    strcpy(origin, string);

    while (origin[i] != '\0')
    {
        if (origin[i] == ' ')
        {
            i++;
            continue;
        }
        *string = origin[i];
        i++;
        string++;
    }
    // string++;
    *string = '\0';

}