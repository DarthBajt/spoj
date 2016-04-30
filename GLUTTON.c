/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, n, m, i, czas, paczkow;
  scanf("%d", &testow);
  while (testow--) {
    paczkow = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; ++i) {
      scanf("%d", &czas);
      paczkow += 86400 / czas;
    }
    printf("%d\n", (paczkow + m - 1) / m);
  }
  return 0;
}
