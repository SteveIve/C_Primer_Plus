#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 30;                                                 //ԭʼ��x
                                                                //�����������
    printf("x in outer block: %d at %p\n", x, &x);              //��ǰ�αؾ�˯�������Ի᳤��
    {
        int x = 77;
        printf("x in inner block: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);
    while (x++ < 33)
    {
        int x = 100;
        x++;
        printf("x in while loop: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);

    system("pause");
    return 0;
}