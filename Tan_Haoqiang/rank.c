// p107
#include <stdio.h>
int main(void)
{
    float a;
    int b;
    char rank;
    printf("Please enter your score:\n");
    scanf("%f", &a);
    while (a < 0 || a > 100)
    {
        printf("Wrong score, enter again:\n");
        scanf("%f", &a);
    }
    b = (int) a / 10;           //сеяе
    switch (b)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        rank = 'E';
        break;
    case 6:
        rank = 'D';
        break;
    case 7:
        rank = 'C';
        break;
    case 8:
        rank = 'B';
        break;
    case 9:
    case 10:
        rank = 'A';
        break;
    default:
        break;
    }
    printf("According to your score %.1f, your rank is %c.\n", a, rank);
    system("pause");
    return 0;
}