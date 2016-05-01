/* 01.05.2016 */

#include <stdio.h>
#include <ctype.h>

int
main (int argc, char ** argv)
{
  int testow, suma, i;
  char bufor[150];
  scanf("%d\n", &testow);
  while (testow--) {
    fgets(bufor, 150, stdin);
    suma = bufor[0] - '0';
    for (i = 1; bufor[i+1]; i++) {
      if (bufor[i] == '+')
        suma += bufor[i+1] - '0';
      else if (bufor[i] == '-')
        suma -= bufor[i+1] - '0';
    }
    printf("%d\n", suma);
  }
  return 0;
}
