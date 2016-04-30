/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, s, i;
  scanf("%d", &testow);
  while (testow--) {
    i = 0;
    scanf("%d", &s);
    while (s != 1) {
      if (s % 2 == 0)
        s = s / 2;
      else
        s = s*3 + 1;
      i++;
    }
    printf("%d\n", i);
  }
  return 0;
}
