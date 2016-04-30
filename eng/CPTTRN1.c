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
        putchar(chars[(i + j) % 2]);
      putchar('\n');
    }
    putchar('\n');
  }
  return 0;
}
