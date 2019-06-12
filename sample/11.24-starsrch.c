#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define listsize 6

int main(void)
{
    const char * list[listsize] = 
    {
        "astronomy", "astounding",
        "astrophysics", "ostracize",
        "asterism", "astrophobia"
    };
    int count = 0;
    int i;
    
    for (i = 0; i < listsize; i++)
    {
        if (strncmp(list[i], "astro", 5) == 0)
        {
            printf("Found: %s\n", list[i]);
            count++;
        }
    }
    printf("The list contained %d words beginning with astro.\n", count);

    system("pause");
    return 0;
}