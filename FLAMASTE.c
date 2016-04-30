/* 13.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, i, liter;
  char napis[201], c;
  scanf("%d", &testow);
  while (testow--) {
    scanf("%s", napis);
    for (i = 0; napis[i]; ++i) {
      liter = 0;
      c = napis[i];
      while (napis[i++] == c)
        liter++;
      i -= 2;

      if (liter == 1)
        putchar(c);
      else if (liter == 2) {
        putchar(c);
        putchar(c);
      }
      else {
        putchar(c);
        printf("%d", liter);
      }
    }
    putchar('\n');
  }
  return 0;
}
