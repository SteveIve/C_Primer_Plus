#include <stdio.h>
#define SIZE 40
char * get_string(char * st, int n);

int main(void)
{
	char string[SIZE];
  	puts("Enter a string:");
    get_string(string, SIZE);
    puts(string);
    return 0;
}

char * get_string(char * st, int n)
{
	int i;    
    for(i = 0; i < n; i++)
    {
    	st[i] = getchar();
      	if (st[i] == EOF)
        	return NULL;
        if (st[i] == '\n')
        {
         	st[i] = '\0';
           	break;
         }
    }
   	return st;
}