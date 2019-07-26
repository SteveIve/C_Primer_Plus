#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81
struct namect {
    char * fname;
    char * lname;
    int letters;
};

void getinfo(struct namect *);      //·ÖÅäÄÚ´æ
void makeinfo(struct namect *);
void showinfo(struct namect *);