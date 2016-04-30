/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, n, i, x, y;
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d", &n);
    scanf("%d", &x);
    scanf("%d", &y);
    for (i = 2; i < n; ++i)
      if ((i % x == 0) && (i % y != 0))
        printf("%d ", i);
    putchar('\n');
  }
  return 0;
}
