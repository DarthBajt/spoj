/*
  created: 14.04.2016
  edited: 30.04.2016
*/

#include <stdio.h>
#include <math.h>

int
main (int argc, char ** argv)
{
  int testow, n, i, tab[100], suma, wynik;
  double srednia, min, l;
  scanf("%d", &testow);
  while (testow--) {
    suma = 0;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
      scanf("%d", &tab[i]);
      suma += tab[i];
    }
    srednia = (double) suma / n;
    min = fabs(srednia - tab[0]);
    wynik = tab[0];
    for (i = 1; i < n; ++i) {
      l = fabs(srednia - tab[i]);
      if (l < min) {
        min = l;
        wynik = tab[i];
      }
    }
    printf("%d\n", wynik);
  }
  return 0;
}
