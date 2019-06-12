#include <stdio.h>
#include <stdlib.h>
#define MSG "I'm special"

int main(void)
{
    char ar[] = MSG;
    const char * pt = MSG;
    printf("address of \"I'm special\": %p \n", "I'm special");
    printf("                 adress ar: %p \n", ar);
    printf("                 adress pt: %p \n", pt);
    printf("             adress of MSG: %p \n", MSG);
    printf("address of \"I'm special\": %p \n", "I'm special");

    system("pause");
    return 0;
}