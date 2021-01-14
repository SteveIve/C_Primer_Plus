#include <stdio.h>

typedef struct test1
{
    int value;
    int index;
}struct1;

typedef struct test2
{
    int value;
    int index;
}struct2[10];

int main(void)
{
    printf("struct1[10] occupies %d bits.\n", sizeof(struct1[10]));
    printf("struct2 occupies %d bits.\n", sizeof(struct2));

    system("pause");
    return 0;
}
