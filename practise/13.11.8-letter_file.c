#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMELEN 81

int main(int argc, char * argv[])
{
    FILE * fp;
    int ch;

    if (argc < 3)
    {
        if (argc == 1)
        {
            