#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""                 //这个宏似乎没有什么用
void stsrt(char * st[], int num);
char * s_gets(char * st, int n);

int main(void)
{
    char input[LIM][SIZE];
    char * ptstr[LIM];
    int ct = 0;
    int k;

    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the Enter key at a line's start.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];
        ct++;
    }
    stsrt(ptstr, ct);                   //此处比较精妙，排序的是指针，把排好序的指针放在一个数组里，比排序字符串方便
    puts("\nHere's the sorted list:\n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);
    
    system("pause");
    return 0;
}

void stsrt(char * strings[], int num)
{
    char * temp;
    int top, seek;

    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
            if (strcmpi(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}