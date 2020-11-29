#include <stdio.h>
int main(void)
{
    int num, result, answer = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (int i = 1; i < num + 1; i++)
    {
        printf("%d! ", i);
        result = 1;
        for (int j = 1; j <= i; j++)
        {
            result *= j;
        }
        answer += result;
        if (i != num)
            printf("+ ");
    }
    printf("= %lld\n", answer);
    system("pause");
    return 0;

}