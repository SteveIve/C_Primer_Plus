#include <stdio.h>
#define stlen 10
int main(void) {
  char words[stlen];
  int i;

  puts("Enter strings (empty line to quit):");
  while (fgets(words, stlen, stdin) != NULL && words[0] != '\n') {
    i = 0;
    while (words[i] != '\n' && words[i] != '\0')
      i++;
    if (words[i] == '\n')
      words[i] = '\0';
    else
      while (getchar() != '\n')
        continue;
    puts(words);
  }
  puts("Done");
  return 0;
}
