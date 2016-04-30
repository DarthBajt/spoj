/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int i = 0, a = 0, b;
  scanf("%d", &a);
  printf("%d\n", a);
  while (scanf("%d", &b) != EOF) {
    if (i == 3)
      break;
    if (a != 42 && b == 42)
      i++;
    printf("%d\n", b);
    a = b;
  }
  return 0;
}
