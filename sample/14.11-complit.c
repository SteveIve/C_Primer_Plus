#include <stdio.h>
#include <stdlib.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book readfirst;
    int score;

    printf("Enter test score: ");
    scanf("%d", &score);

    if (score >= 84)
        readfirst = (struct book) {"Crime and Punishment",
                            "Fyodor Dostoyevsky",
                            11.25};
    else
        readfirst = (struct book) {"Mr. Bouncy's Nice Hat",
                            "Fred Winsome",
                            5.99};
    
    printf("Your assigned readings:\n");
    printf("%s by %s: $%.2f\n", readfirst.title, readfirst.author, readfirst.value);

    system("pause");
    return 0;
}