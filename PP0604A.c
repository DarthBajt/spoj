/* 14.04.2016 */

#include <stdio.h>
#include <math.h>

int
main (int argc, char ** argv)
{
  int testow, n, i, tab[100], suma, min, l, wynik;
  scanf("%d", &testow);
  while (testow--) {
    suma = 0;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
      scanf("%d", &tab[i]);
      suma += tab[i];
    }
    suma *= 10;
    suma /= n;
    min = abs(suma - tab[0]*10);
    wynik = tab[0];
    for (i = 1; i < n; ++i) {
      l = abs(suma - tab[i]*10);
      if (l < min) {
        min = l;
        wynik = tab[i];
      }
    }
    printf("%d\n", wynik);
  }
  return 0;
}
