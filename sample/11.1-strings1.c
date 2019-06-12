#include <stdio.h>
#include <stdlib.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char *pt1 = "Something is pointing at me.";
    puts("Here are some strings:");              //这里没有\n换行符
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

    system("pause");
    return 0;
}