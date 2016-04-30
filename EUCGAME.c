/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, a, b, c;
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d %d", &a, &b);
    while (b != 0) {
      c = a % b;
      a = b;
      b = c;
    }
    printf("%d\n", a + a);
  }
  return 0;
}
