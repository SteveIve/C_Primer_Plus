#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 30;                                                 //原始的x
                                                                //天天困，妈的
    printf("x in outer block: %d at %p\n", x, &x);              //生前何必久睡，死后自会长眠
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