/* 01.05.2016 */

#include <stdio.h>
#include <ctype.h>

#define N 100000

int
main (int argc, char ** argv)
{
  char bufor[N];
  int wyrazow, liczb, i;
  while (fgets(bufor, N, stdin) != NULL) {
    wyrazow = liczb = 0;
    if (isalpha(bufor[0]))
      wyrazow++;
    else
      liczb++;
    for (i = 1; bufor[i+1]; ++i) {
      if (isspace(bufor[i])) {
        if (isalpha(bufor[i+1]))
          wyrazow++;
        else
          liczb++;
      }
    }
    printf("%d %d\n", liczb, wyrazow);
  }
  return 0;
}
