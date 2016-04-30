/* 15.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, n, k, i;
  int wynik;
  scanf("%d", &testow);
  while (testow--) {
    wynik = 1;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= k; ++i)
      wynik = wynik * (n - i + 1) / i;
    printf("%d\n", wynik);
  }
  return 0;
}
