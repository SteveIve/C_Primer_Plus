#include <stdio.h>
#define maxsize 255
typedef struct SString_struct
{
    char chars[maxsize];
    int length;
}SString;

int StringCompare(SString *s1, SString *s2)
{
    int i, j;
    for (i = 1, j = 1; i <= s1->length && j <= s2->length; i++, j++)
    {
        if (s1->chars[i] != s2->chars[j])
        {
            return s1->chars[i] - s2->chars[j];
        }
    }

    return (s1->length - s2->length);
}

int main(void)
{
    SString *s1, *s2;
    &s1->chars[1] = "a brother";
    &s2->chars[2] = "a sister";

    printf("%d", StringCompare(s1, s2));

    system("pause");
    return 0;
}