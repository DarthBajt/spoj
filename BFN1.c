/* 30.04.2016 */

#include <stdio.h>

int
reverse (int n)
{
  int ret = n % 10;
  while (n /= 10) {
    ret *= 10;
    ret += n % 10;
  }
  return ret;
}

int
main (int argc, char ** argv)
{
  int testow, n, i, rn;
  scanf("%d", &testow);
  while (testow--) {
    i = 0;
    scanf("%d", &n);
    rn = reverse(n);
    while (n != rn) {
      i++;
      n += rn;
      rn = reverse(n);
    }
    printf("%d %d\n", n, i);
  }
  return 0;
}
