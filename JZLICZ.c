/* 13.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int n, i, litery[127];
  char wiersz[201];
  for (i = 0; i < 127; ++i)
    litery[i] = 0;
  scanf("%d", &n);
  getchar();
  while (n--) {
    fgets(wiersz, 201, stdin);
    for (i = 0; wiersz[i]; ++i)
      litery[wiersz[i]]++;
  }
  for (i = 'a'; i <= 'z'; ++i)
    if (litery[i] > 0)
      printf("%c %d\n", i, litery[i]);
  for (i = 'A'; i <= 'Z'; ++i)
    if (litery[i] > 0)
      printf("%c %d\n", i, litery[i]);

  return 0;
}
