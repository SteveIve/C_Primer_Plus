// p109
#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, y, height;
    float distan1, distan2, distan3, distan4;
    printf("Please enter the coordiance of the location:\n");
    scanf("%d,%d", &x, &y);

    distan1 = pow((x+2), 2) + pow((y-2), 2);
    distan2 = pow((x-2), 2) + pow((y-2), 2);
    distan3 = pow((x+2), 2) + pow((y+2), 2);
    distan4 = pow((x-2), 2) + pow((y+2), 2);

    if (distan1 > 1 && distan2 >1 && distan3>1 && distan4>1)
    {
        height = 0;
    }
    else
    {
        height = 10;
    }

    printf("坐标(%d, %d)处的高度为%d\n", x, y, height);

    system("pause");
    return 0;
}