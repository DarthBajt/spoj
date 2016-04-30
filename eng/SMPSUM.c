/* 15.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int a, b, i, wynik = 0;
  scanf("%d %d", &a, &b);
  for (i = a; i <= b; ++i)
    wynik += i*i;
  printf("%d\n", wynik);
  return 0;
}
