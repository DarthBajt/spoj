/* 30.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int n, i, tab[1000], a;
  char warunek[2];
  scanf("%d", &n);
  for (i = 0; i < n; ++i)
    scanf("%d", &tab[i]);
  scanf("%s %d", warunek, &a);
  if (warunek[0] == '<') {
    for (i = 0; i < n; ++i)
      if (tab[i] < a)
        printf("%d\n", tab[i]);
  } else {
    for (i = 0; i < n; ++i)
      if (tab[i] > a)
        printf("%d\n", tab[i]);
  }
  return 0;
}
