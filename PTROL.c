/* 13.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, n, i, tab[100], temp;
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
      scanf("%d", &tab[i]);

    temp = tab[0];
    for (i = 0; i < n - 1; ++i)
      tab[i] = tab[i + 1];
    tab[n-1] = temp;

    for (i = 0; i < n; ++i)
      printf("%d ", tab[i]);
    putchar('\n');
  }
  return 0;
}
