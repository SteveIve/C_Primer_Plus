#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81
struct namect {
    char * fname;
    char * lname;
    int letters;
};

void getinfo(struct namect *);      //分配内存
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);      //调用该函数时释放内存
char * s_gets(char * st, int n);

int main(void)
{
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);

    system("pause");
    return 0;
}

void getinfo(struct namect * pst)
{
    char temp[SLEN];
    printf("Please enter your first name.\n");
    s_gets(temp, SLEN);
    pst->fname = (char *) malloc(strlen(temp) + 1);     //分配内存储存名
    strcpy(pst->fname,temp);        //把名拷贝到动态分配的内存中
    printf("Please enter your last name.\n");
    s_gets(temp, SLEN);
    pst->lname = (char *) malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}

void makeinfo(struct namect * pst)
{
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
    printf("%s %s, you name contains %d letters.\n",
            pst->fname, pst->lname, pst->letters);
}

void cleanup(struct namect * pst)
{
    free(pst->fname);
    free(pst->lname);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}