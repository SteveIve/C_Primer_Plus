#include <stdio.h>
int main(void)
{
    float speed = 0.0;
    float size = 0.0;
    float time = 0.0;
    printf("Enter your net speed in Mb/s:\n");
    scanf("%f", &speed);
    printf("Enter size of file in MB:\n");
    scanf("%f", &size);

    time = size * 8 / speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in "
    "%.2f seconds.\n", speed, size, time);

    system("pause");
    return 0;
}