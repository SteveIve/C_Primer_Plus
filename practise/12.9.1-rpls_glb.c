#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int units = 0;

    printf("How many pounds to a frkin of butter?\n");
    scanf("%d", &units);
    while (units != 56);
    {
        printf("Now luck, my friend. Try again.\n");
        scnaf("%d", &units);
    }
    printf("You must have looked it up!\n");

    system("pause");
    return 0;
}