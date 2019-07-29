#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LEN 81

char * s_gets(char * st, int n);
char showmenu(void);
void eatline(void);     //读到行尾
void show(void (*fp)(char *), char * str);
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);     //不更改字符串

int main(void)
{
    char line[LEN];
    char copy[LEN];
    char choice;
    void (*pfun)(char *);
    puts("Enter a string (empty to quit):");
    while (s_gets(line, LEN) != NULL && line[0] != '\0')
    {
        while ((choice = showmenu()) != 'n')
        {
            switch (choice)
            {
                case 'u':
                    pfun = ToUpper;
                    break;
                case 'l':
                    pfun = ToLower;
                    break;
                case 't':
                    pfun = Transpose;
                    break;
                case 'o':
                    pfun = Dummy;
                    break;
            }
            strcpy(copy, line);
            show(pfun, copy);
        }
        puts("Enter a string (empty line to quit):");
    }
    puts("Bye!");

    system("pause");
    return 0;
}

char showmenu(void)
{
    char ans;
    puts("Enter menu choice:");
    puts("u) uppercase\t\tl) lowercase");
    puts("t) transposed case\t\to) original case");
    puts("n) next string");
    ans = getchar();
    ans = tolower(ans);
    eatline();
    while (strchr("ulton", ans) == NULL)
    {
        puts("Please enter a u, l, t, o, or n:");
        ans = tolower(getchar());
        eatline();
    }

    return ans;
}

void 