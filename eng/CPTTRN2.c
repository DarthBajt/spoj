/* 15.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int tests, l, c, i, j;
  char *chars = "*.";
  scanf("%d", &tests);
  while (tests--) {
    scanf("%d %d", &l, &c);
    for (i = 0; i < l; ++i) {
      for (j = 0; j < c; ++j)
        if (i == 0 || i == l-1 || j == 0 || j == c-1)
          putchar('*');
        else
          putchar('.');
      putchar('\n');
    }
    putchar('\n');
  }
  return 0;
}
