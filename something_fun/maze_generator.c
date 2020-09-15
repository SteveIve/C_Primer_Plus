#include <stdio.h>
#include <ctype.h>

int* get_input(void);
int mode_judge(int*);
void code_to_message(int*);
void message_to_code(int*);

int main(void)
{
    printf("Enter filename to start code/decode:\n");
    printf("Enter \"Q\" to quit.\n");
    while (scanf() != 'Q')
    {
        int* input = get_input();
        int flag = mode_judge(input);
        if (flag)
        {
            code_to_message(input);
        }
        else if(!flag)
        {
            message_to_code(input);
        }
        else
        {
            printf("Wrong.\n");
        }
    }
    
}

int* get_input(void)
{
    int input[999];
    printf("Enter code or message to generate:\n");
    scanf("%s", &input);
    return input;
}

int mode_judge(int* input)
{
    if (isdigit(*input))
        return 1;
    else if (isalpha)
        return 0;
    else
        return -1;
    
}

void code_to_message(int* input)
{
    int i = 0;
    while (input[i] != EOF)
    {
        printf("%c", input[i]);
        i++;
    }
}