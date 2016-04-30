/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, n;
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d", &n);
    printf("%d\n", n*n);
  }
  return 0;
}
