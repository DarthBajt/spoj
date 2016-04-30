/* 15.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int a;
  while (scanf("%d", &a) != EOF) {
    if (a == 42) break;
    printf("%d\n", a);
  }
  return 0;
}
