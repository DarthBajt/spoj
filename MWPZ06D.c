/* 15.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int c, l, testow;
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d %d", &l, &c);
    l--;
    if (l == 0)
      puts("TAK");
    else if (l > c)
      puts("TAK");
    else if (c % l == 0)
      puts("NIE");
    else
      puts("TAK");
  }
  return 0;
}
