#include <stdio.h>
#include <stdlib.h>
double harmonic_average(double num1, double num2) {return (1/(((1/num1)+(1/num2))/2));}

int main(void)
{
    float first;
    float second;
    printf("Enter two number please:\n");     
    scanf("%f %f", &first, &second);                         //something wrong with it, fix latter.
    printf("The harmonic average of %.2f and %.2f is %.5f.\n",first, second, harmonic_average(first, second));

    system("pause");
    return 0;
}
