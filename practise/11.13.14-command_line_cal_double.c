#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int power;
    double base_num;
    double answer = 1;

    if (argc != 3 || (power = atoi(argv[2])) < 1)
        puts("Usage: enter a number as base, and an integer as power:");
    else
    {
        power = atoi(argv[2]);
        base_num = atof(argv[1]);

        while (power >= 1)
        {
            answer *= base_num;
            power--;
        }
        printf("The answer is %.3f.\n", answer);
    }
    // system("pause");
    return 0;
}