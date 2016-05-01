/* 01.05.2016 */

#include <stdio.h>

#define SZEROKOSC 30

int
main (int argc, char ** argv)
{
  static int tab[21], liczba, i, j, max, ile;

  while (scanf("%d\n", &liczba) != EOF)
    tab[liczba + 10]++;

  max = tab[0];
  for (i = 1; i < 21; ++i)
    if (max < tab[i])
      max = tab[i];

  if (max > 0) {
    for (i = 0; i < 21; ++i) {
      printf("%4d:|", i -10);
      ile = SZEROKOSC * tab[i] / max;
      for (j = 0; j < SZEROKOSC; ++j)
      if (j < ile)
      putchar('*');
      else
      putchar(' ');
      puts("|");
    }
  }
  return 0;
}
