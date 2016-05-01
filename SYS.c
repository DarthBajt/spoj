/*
  30.04.2016
  01.05.2016
*/

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, n, i, m;
  char bufor[32], *cyfry = "0123456789ABCDEF";
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d", &n);
    m = n;
    i = 0;
    do {
      bufor[i++] = cyfry[n % 16];
    } while (n /= 16);
    while (i--)
      putchar(bufor[i]);
    putchar(' ');
    i = 0;
    do {
      bufor[i++] = cyfry[m % 11];
    } while (m /= 11);
    while (i--)
      putchar(bufor[i]);
    putchar('\n');
  }
  return 0;
}
