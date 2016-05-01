/*
  created: 15.04.2016
  edited: 01.05.2016
*/

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, n, k, i, j, tab[1001][1001];
  int wynik;
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d %d", &n, &k);
    tab[0][0] = 1;
    for (i = 1; i <= n; ++i) {
      tab[i][0] = tab[i][i] = 1;
      for (j = 1; j < i; ++j)
        tab[i][j] = tab[i-1][j-1] + tab[i-1][j];
    }
    printf("%d\n", tab[n][k]);
  }
  return 0;
}
