/* 01.05.2016 */

#include <stdio.h>
#include <string.h>

int
main (int argc, char ** argv)
{
  char polecenie[20], klucz[20], *alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", znak;
  int len, i = 0;
  scanf("%s %s\n", polecenie, klucz);
  len = strlen(klucz);
  if (polecenie[0] == 'S') {
    while ((znak = getchar()) != '\n') {
      putchar(alfabet[((klucz[i % len] - '0') + (znak - 'A')) % 26]);
      i++;
    }
  } else {
    while ((znak = getchar()) != '\n') {
      putchar(alfabet[((znak - 'A') - (klucz[i % len] - '0')) % 26]);
      i++;
    }
  }
  putchar('\n');
  return 0;
}
