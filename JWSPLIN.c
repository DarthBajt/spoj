/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, x1, x2, x3, y1, y2, y3;
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if ((x1*y2 + x2*y3 + x3*y1 - x3*y2 - x1*y3 - x2*y1) == 0)
      puts("TAK");
    else
      puts("NIE");
  }
  return 0;
}
