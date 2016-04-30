/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int m, n, i, j, macierz[200][200];
  scanf("%d %d", &m, &n);
  for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j)
      scanf("%d", &macierz[i][j]);
  for (i = 0; i < n; ++i) {
    for (j = 0; j < m; ++j)
      printf("%d ", macierz[j][i]);
    putchar('\n');
  }
  return 0;
}
