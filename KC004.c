/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int szukana, n, i, znaleziono, liczba;
  while (scanf("%d", &szukana) != EOF) {
    znaleziono = 0;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
      scanf("%d", &liczba);
      if (liczba == szukana)
        znaleziono++;
    }
    printf("%d\n", znaleziono);
  }
  return 0;
}
