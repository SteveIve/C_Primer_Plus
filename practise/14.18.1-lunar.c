#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define abblen 5
#define monamelen 10

struct lunar {
    char month_name[monamelen];
    int days;
};

int get_days(char * month);
void eatline(void);

int main(void)
{
    char month[monamelen];
    int days;

    puts("Enter a month, I'll tell you the days:");
    scanf("%s", month);
    eatline();
    days = get_days(month);
    printf("There are %d days totally.", days);

    system("pause");
    return 0;
}

void eatline(void)
{
    while (getchar() != '\n')
        continue;
}

int get_days(char * month)
{
    int index = 0;
    int total = 0;

    struct lunar year[12] = {
        {"January", 31},
        {"February", 28},
        {"March", 31},
        {"April", 30},
        {"May", 31},
        {"June", 30},
        {"July", 31},
        {"August", 31},
        {"Septempber", 30},
        {"October", 31},
        {"November", 30},
        {"December", 31}
    };

    while (index < 12)
    {
        if (strncmp(month, year[index].month_name, 4) != 0)
            total += year[index].days;
        else
        {
            total += year[index].days;
            return total;
        }
        index++;
    }
    fprintf(stderr, "Wrong input.\n");
    exit(EXIT_FAILURE);
}