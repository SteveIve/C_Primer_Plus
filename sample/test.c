#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    double * string;
    double sum;
    double averg;
    int num, i = 0;
    fp = fopen("data.t", "rb");
    fread(&num, sizeof(int), 1, fp);
    string = calloc(sizeof(double), num);
    while (i < num)
        fread(&string[i], sizeof(double), 1, fp);
    for(i = 0, sum = 0; i<num; i++)
    {
        sum = sum + string[i];
    }
    averg = sum/num;
    printf("The average is %lf.\n", averg);
    free(string);
    fclose(fp);

    return 0;
}