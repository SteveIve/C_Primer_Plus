#include <stdio.h>

int main(void)
{
    float centimeters = 0;

    printf("Enter your height in centimeters: ");
    scanf("%f", &centimeters);
    printf("You height in inch is about %.2f.\n", centimeters/2.54);
    system("pause");
    return 0;
}