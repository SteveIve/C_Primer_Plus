#include <stdio.h>
#include <stdlib.h>
#define NAMELEN 81

void sh_tw_files(FILE * f1, FILE * f2);

int main(int argc, char * argv[])
{
    FILE * f1, * f2;
    char name_1[NAMELEN];
    char name_2[NAMELEN];

    if (argc == 3)
    {
        if ((f1 = fopen(argv[1], "r")) == NULL)
        {
            fprintf()
        }
    }
}