/* 15.04.2016 */

#include <stdio.h>
#include <ctype.h>

int
main (int argc, char ** argv)
{
  char znak[2], napis[100];
  int i;
  while (scanf("%s %s", znak, napis) != EOF) {
    for (i = 0; napis[i]; ++i)
      if (napis[i] != znak[0])
        putchar(napis[i]);
    putchar('\n');
  }
  return 0;
}
