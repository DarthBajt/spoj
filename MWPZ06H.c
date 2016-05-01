/* 01.05.2016 */

#include <stdio.h>
#include <stdlib.h>

int
compare (const void * a, const void * b)
{
  return (*(int*)a - *(int*)b);
}

int
main (int argc, char ** argv)
{
  int testow, n, i, tab[200], max, j;
  scanf("%d", &testow);
  while (testow--) {
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
      scanf("%d", &tab[i]);
    qsort(tab, n, sizeof(int), compare);

    max = tab[0];
    j = 0;
    for (i = 1; i < n; ++i)
      if (max < tab[i]) {
        max = tab[i];
        j = i;
      }
    i = n-j;
    while (i--)
      printf("%d ", max);
    for (i = 0; i < j; ++i)
      printf("%d ", tab[i]);
    putchar('\n');
  }
  return 0;
}
