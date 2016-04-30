/* 13.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int k, j, n, i, tab[10000], temp;
  scanf("%d", &n);
  scanf("%d", &k);
  for (i = 0; i < n; ++i)
    scanf("%d", &tab[i]);

  k %= n;
  for (j = 0; j < k; ++j) {
    temp = tab[0];
    for (i = 0; i < n - 1; ++i)
    tab[i] = tab[i + 1];
    tab[n-1] = temp;
  }

  for (i = 0; i < n; ++i)
    printf("%d ", tab[i]);
  putchar('\n');
  return 0;
}
