#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LIM 10
#define size 99
char * s_gets(char * st, int n);
void show_menu(void);
void A(const char * strings[], const int n);
void B(const char * strings[], const int n);
void C(const char * strings[], const int n);
void D(const char * strings[], const int n);
char get_first(void);

int main(void)
{
    char strings[LIM][size];
    char * str_ptr[LIM];
    int i = 0;
    char choice;
    int continue_flag = 1;

    puts("Enter up to 10 strings:");
    while (i < LIM && s_gets(strings[i], size))
    {
        str_ptr[i] = strings[i];
        i++;
    }
    
    while (continue_flag)
    {
        putchar('\n');
        show_menu();
        choice = get_first();
        switch (choice)
        {
        case 'a':
            A(str_ptr, LIM);
            continue;
        case 'b':
            B(str_ptr, LIM);
            continue;
        case 'c':
            C(str_ptr, LIM);
            continue;
        case 'd':
            D(str_ptr, LIM);
            continue;
        case 'q':
            break;
        default:
            puts("Invalide choice! Try again!");
            continue;
        }
        break;
        puts("Hey, I don't konw what to do now.");
        puts("Here are the words you will never see.");
        puts("You know,");
        puts("I am the kind of person who fear choosing");
        puts("Now there are some choices in front of me.");
        puts("When I was forced to choose only single one");
        puts("It is so like me right?");
        puts("always thinking about escaping");
        puts("I am afraid...");
        puts("To be honest,");
        puts("I really want to sleep for a thousand years");
        puts("Then wake up, check out how are the things going on");
        puts("I was never the one who can properly make things on their ways.");
        puts("alright, just forgive my tidity");
        puts("Maybe we will meet again several years later");
        puts("And maybe we already know how to face this kind'a situation...");
        puts("bye");
    }

    puts("Bye!");

    system("pause");
    return 0;
}

void show_menu(void)
{
    puts("Enter your choice:\na. print the string list\t\tb. print with the ASCII order");
    puts("c. print with the length order\t\td. print with the length of first word\nq. quit");
    return;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}

void A(const char * strings[], const int n)
{
    int i;
    puts("Here are the entered strings:");
    for (i = 0; i < n; i++)
        puts(strings[i]);
    return;
}

void B(const char * string[], const int n)
{
    char * strings[n];
    int index;
    for (index = 0; index < n; index++)
        strings[index] = string[index];
    char * temp;
    int top, seek;

    for (top = 0; top < n-1; top++)
    {
        for (seek = top + 1; seek < n; seek++)
        {
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }

    for (top = 0; top < n; top++)
        puts(strings[top]);
    
    return;
}

void C(const char * string[], const int n)
{
    char * strings[n];
    int index;
    for (index = 0; index < n; index++)
        strings[index] = string[index];
    char * temp;
    int top, seek;
    
    for (top = 0; top < n - 1; top++)
    {
        for (seek = top + 1; seek < n; seek++)
        {
            if (strlen(strings[top]) > strlen(strings[seek]))
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }

    for (top = 0; top < n; top++)
        puts(strings[top]);
    
    return;
}

void D(const char * string[], const int n)
{
    char * strings[n];
    int index;
    for (index = 0; index < n; index++)
        strings[index] = string[index];
    int top, seek;
    char * temp;
    int top_len;
    int seek_len;
    int top_count;
    int seek_count;

    for (top = 0; top < n - 1; top++)
    {
        for (seek = top + 1; seek < n; seek++)
        {   
            top_len = seek_len = 0;
            for (top_count = 0; strings[top][top_count] != ' ' && strings[top][top_count] != '\0'; top_count++)
                top_len = top_count;
            for (seek_count = 0; strings[seek][seek_count] != ' ' && strings[seek][seek_count] != '\0'; seek_count++)
                seek_len = seek_count;
            if (top_len < seek_len)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }

    for (top = 0; top < n; top++)
        puts(strings[top]);

    return;
}

char get_first(void)
{
    char ch;
    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}