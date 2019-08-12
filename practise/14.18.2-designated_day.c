#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define monamelen 10

struct lunar {
    char month_name[monamelen];
    int days;
};

void eatlines(void);

int main(void)
{
    int total;
    int index;
    int year;
    int month_num;
    int day;
    char month_string[monamelen];

    struct lunar ayear[12] = {
        {"Janaury", 31},
        {"February", 28},
        {"March", 31},
        {"April", 30},
        {"May", 31},
        {"June", 30},
        {"July", 31},
        {"August", 31},
        {"September", 30},
        {"October", 31},
        {"November", 30},
        {"December", 31}
    };

    puts("Enter a year please:");
    scanf("%d", &year);
    eatlines();
    if ((year % 4 == 0) && (year % 100 != 0 || year % 4 == 0))
        ayear[1].days = 29;
    puts("Then enter the month please:");
    scanf("%s", month_string);
    eatlines();
    if (isdigit(month_string[0]))
    {
        month_num = atoi(month_string);
        switch (month_num)
        {
            case 1:
                strcpy(month_string, "Janaury");
                break;
            case 2:
                strcpy(month_string, "February");
                break;
            case 3:
                strcpy(month_string, "March");
                break;
            case 4:
                strcpy(month_string, "April");
                break;
            case 5:
                strcpy(month_string, "May");
                break;
            case 6:
                strcpy(month_string, "June");
                break;
            case 7:
                strcpy(month_string, "July");
                break;
            case 8:
                strcpy(month_string, "August");
                break;
            case 9:
                strcpy(month_string, "September");
                break;
            case 10:
                strcpy(month_string, "October");
                break;
            case 11:
                strcpy(month_string, "November");
                break;
            case 12:
                strcpy(month_string, "December");
                break;
            default:
                fprintf(stderr, "Wrong in entering month number.\n");
                exit(EXIT_FAILURE);
        }
    }
    puts("Now enter the day please:");
    scanf("%d", &day);
    eatlines();

    index = total = 0;

    while (index < 12)
    {
        if (strcmp(month_string, ayear[index].month_name) != 0)
            total += ayear[index].days;
        else
        {
            total += day;
            fprintf(stdout, "Till %s %d%s, %d, there %s %d %s totally.\n", month_string, day,
                (day == 1 ? "st" : "th"), year, (total == 1 ? "is" : "are"),
                 total, (total == 1 ? "day" : "days"));
            
            system("pause");
            return 0;
        }
        index++;
    }
    puts("Wrong in calculating.");
    exit(EXIT_FAILURE);
}

void eatlines(void)
{
    while (getchar() != '\n')
        continue;
}