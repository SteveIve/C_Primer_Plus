#include <stdio.h>
#include <stdlib.h>
#define size 10

int sump(int * start, int * end);

int main(void)
{
    int marbles[size] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
    long answer;

    answer = sump(marbles, marbles + size);
    printf("The total number of marbles is %ld.\n", answer);

    system("pause");
    return 0;
}

int sump(int * start, int * end)
{
    int total = 0;

    while (start < end)
    {
        total += *start;
        start++;
    }

    return total;
}