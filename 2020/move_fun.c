#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int m;
int main(void)
{
    void fun(char *, int);
    char str[] = "ab123456789cde090", *p = str;
    int n = strlen(str);
    printf("请输入m值:\n");                             //m值应小于字符串长度
    scanf("%d", &m);
    while (m < 0 || m > n)
    {
        printf("Invalid number, enter agagin:\n");
        scanf("%d", &m);
    }
    printf("*** 原始数据排列 ***\n");
    puts(str);                                                          // puts自带换行符
    fun(p, n);
    putchar('\n');
    printf("*** 调整后数据排序 ***\n");
    puts(str);
    system("pause");
    return 0;
}

void fun(char * str, int n)
{
    char* str_moved = malloc(sizeof(char) * (n + 1));                   // 分配 n+1 个字符长度的空间，最后一个用于存放'\0'
    for (int i = m, j = 0; j < n; i++, j++)                             // 当索引值j等于字符长度时候退出循环
    {
        if (i == n)                                                     // 若原字符串索引指向末尾时
        {
           i = 0;                                                       // 将索引值置为0指向开头
        }
        
        *(str_moved + j) = *(str + i);
    }
    *(str_moved + n) = '\0';
    strcpy(str, str_moved);                                             // 最后将修改好的字符串拷贝到原字符串
    free(str_moved);                                                    // 释放内存，优雅
    return;
}