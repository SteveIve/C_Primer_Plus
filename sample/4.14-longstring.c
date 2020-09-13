#include <stdio.h>
int main(void)
{
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a \
long string.\n");               // 如果该行缩进，则会在 a 后面多加x个空格，
                                // x取决于系统一个缩进占用多少个空格
                                // 如果用的VS Code，可以看右下角
    printf("Here's the newest way "
    "to print a long string.\n");

    system("pause");
    return 0;
}