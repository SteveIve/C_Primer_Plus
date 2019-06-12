#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char * stpatblk(char * st, int n);

int main(void)
{
	char string[40];
  char * good_enter;
    
  puts("Enter a string:");
  good_enter = stpatblk(string, 40);
  while (good_enter == NULL)
  {
    puts("Wrong enter, try again:");
    good_enter = stpatblk(string, 40);
  }
  puts(string);
  system("pause");
  return 0;
}

char * stpatblk(char *st, int n)
{
  int i;

  for (i = 0; i < n; i++)
  {
    st[i] = getchar();
    if (st[i] == EOF)
      return NULL;
    if (isspace(st[i]))
    {
      st[i] = '\0';
      break;
    }
  }

  return st;
}