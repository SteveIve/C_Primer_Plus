#include <stdio.h>
#define STARS "*******************"

void ASCII_check(void);
void func_list(void);

int main(void)
{
    int func_index = 0;
    func_list();

    scanf("%d", &func_index);
    getchar();
    while (func_index > 0 && func_index <= 1)
    {
        switch (func_index)
        {
        case 1: 
        {
            ASCII_check();
        }
            break;
        
        default:
            break;
        }
        func_list();
        scanf("%d", &func_index);
        getchar();
    }

    return 0;
}

void func_list(void)
{
    printf("\n�����Ӧ���ܱ��: \n");
    printf("%s\n", STARS);
    printf("1. ASCII�鿴��\t");
    printf("0. �˳�\n");
    printf("%s\n", STARS);
    return;
}

void ASCII_check(void)
{
    char ch;
    printf("���뵥����ĸ�鿴ASCII��:\n");
    printf("���س��˳�\n");
    scanf("%c", &ch);               //\n��10
    while (getchar() != '\n')
        getchar();
    while (ch != '\n')
    {
        printf("'%c'��Ӧ��ASCII��Ϊ%d\n", ch, ch);

        printf("\n���뵥����ĸ�鿴ASCII��:\n");
        printf("���س��˳�\n");
        scanf("%c", &ch);
        while (getchar() != '\n')
            getchar();
    }
}