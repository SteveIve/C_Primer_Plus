#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int m;
int main(void)
{
    void fun(char *, int);
    char str[] = "ab123456789cde090", *p = str;
    int n = strlen(str);
    printf("������mֵ:\n");                             //mֵӦС���ַ�������
    scanf("%d", &m);
    while (m < 0 || m > n)
    {
        printf("Invalid number, enter agagin:\n");
        scanf("%d", &m);
    }
    printf("*** ԭʼ�������� ***\n");
    puts(str);                                                          // puts�Դ����з�
    fun(p, n);
    putchar('\n');
    printf("*** �������������� ***\n");
    puts(str);
    system("pause");
    return 0;
}

void fun(char * str, int n)
{
    char* str_moved = malloc(sizeof(char) * (n + 1));                   // ���� n+1 ���ַ����ȵĿռ䣬���һ�����ڴ��'\0'
    for (int i = m, j = 0; j < n; i++, j++)                             // ������ֵj�����ַ�����ʱ���˳�ѭ��
    {
        if (i == n)                                                     // ��ԭ�ַ�������ָ��ĩβʱ
        {
           i = 0;                                                       // ������ֵ��Ϊ0ָ��ͷ
        }
        
        *(str_moved + j) = *(str + i);
    }
    *(str_moved + n) = '\0';
    strcpy(str, str_moved);                                             // ����޸ĺõ��ַ���������ԭ�ַ���
    free(str_moved);                                                    // �ͷ��ڴ棬����
    return;
}