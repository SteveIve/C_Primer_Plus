#include <stdio.h>
#include <ctype.h>

int* get_input(void);
bool mode_judge(int*);
void code_to_message(int*);
void message_to_code(int*);

int main(void)
{
    int* input = get_input();
    bool flag = mode_judge(input);
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

int* get_input(void)
{
    int input[999];
    printf(":");
    scanf("%s", input);
    return input;
}

bool mode_judge(int* input)
{
    if (isdigit(input))
        return true;
    else if (isalpha)
        return false;
}

void code_to_message(int* input)
{
    
}