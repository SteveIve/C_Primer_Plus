#include <stdio.h>
int main(void)
{
    char first[10];
    char last[10];
    printf("Enter your first and last name:\n");
    scanf("%s %s",first, last);
    printf("%s, %s", first, last);

    system("pause");
    return 0;
}