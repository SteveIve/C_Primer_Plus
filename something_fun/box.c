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
    printf("\n输入对应功能编号: \n");
    printf("%s\n", STARS);
    printf("1. ASCII查看器\t");
    printf("0. 退出\n");
    printf("%s\n", STARS);
    return;
}

void ASCII_check(void)
{
    char ch;
    printf("输入单个字母查看ASCII码:\n");
    printf("按回车退出\n");
    scanf("%c", &ch);               //\n是10
    while (getchar() != '\n')
        getchar();
    while (ch != '\n')
    {
        printf("'%c'对应的ASCII码为%d\n", ch, ch);

        printf("\n输入单个字母查看ASCII码:\n");
        printf("按回车退出\n");
        scanf("%c", &ch);
        while (getchar() != '\n')
            getchar();
    }
}