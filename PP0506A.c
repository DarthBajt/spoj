/* 30.04.2016 */

#include <stdio.h>
#include <stdlib.h>

struct punkt {
  char nazwa[11];
  int x;
  int y;
};

int
cmp (const void * a, const void * b)
{
  int aa = (*(struct punkt *)a).x * (*(struct punkt *)a).x +
            (*(struct punkt *)a).y * (*(struct punkt *)a).y;
  int bb = (*(struct punkt *)b).x * (*(struct punkt *)b).x +
            (*(struct punkt *)b).y * (*(struct punkt *)b).y;
  return (aa - bb);
}

int
main (int argc, char ** argv)
{
  int testow, n, i;
  struct punkt p[1000];
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
      scanf("%s %d %d", p[i].nazwa, &p[i].x, &p[i].y);
    qsort(p, n, sizeof(struct punkt), cmp);
    for (i = 0; i < n; ++i)
      printf("%s %d %d\n", p[i].nazwa, p[i].x, p[i].y);
    putchar('\n');
    getchar();
  }
  return 0;
}
