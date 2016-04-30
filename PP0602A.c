/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, n, i, tab[101];
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
      scanf("%d", &tab[i]);
    for (i = 1; i < n; i += 2)
      printf("%d ", tab[i]);
    for (i = 0; i < n; i += 2)
      printf("%d ", tab[i]);
    putchar('\n');
  }
  return 0;
}
