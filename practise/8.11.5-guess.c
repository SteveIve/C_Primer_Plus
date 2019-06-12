#include <stdio.h>
#include <stdlib.h>
int get_first(void);

int main(void)
{
    int response;
    int max = 100;
    int min = 1;
    int guess = (max + min) / 2;
    printf("This is a number guessing game.\n");
    printf("Of course, I know that nobody will play this fucking stupid game except me.\n");
    printf("I tried so many times to create it.\n");
    printf("Now, think about a number in 1~100, and I'll try to guess it.\n");
    printf("You can reply a Y if I guess right, and a N for the wrong guess.\n");
    // max = 100;
    // min = 1;
    // guess = (max + min) / 2;

    response = get_first();
    while (response != 'q')
    {
        printf("Is the nubmer %d?\n", guess);
        response = get_first();
        if (response != 'y')
        {
            if (response == 'n')
            {
                printf("Is it less than %d?\n", guess);
                response = get_first();
                if (response == 'y')
                {
                    max = guess - 1;
                    guess = (max + min) / 2;
                    continue;
                }
                else if (response == 'n')
                {
                    min = guess + 1;
                    guess = (max + min) / 2;
                    continue;
                }
                else
                {
                    printf("Please reply with Y or N.\n");
                    continue;
                }
                
                
            }
            else
            {
                printf("Please reply with Y or N.\n");
                continue;
            }
            
        }
        else
        {
            printf("I know it !\n");
            break;
        }
        printf("You can continue this game, or press q to quit.\n");
        
    }
    printf("Bye.\n");
    system("pause");
    return 0;
}

int get_first(void)
{
    int ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;

    return ch;
}