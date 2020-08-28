#include <stdio.h>
int main(void)
{
    int year;
    double sec;
    printf("Please enter your age: ");
    scanf("%d", &year);
    sec = year * 3.156e7;
    printf("You have lived about %.2e seconds.\n", sec);
    system("pause");
    return 0;
}