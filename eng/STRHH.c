/* 15.04.2016 */

#include <stdio.h>
#include <string.h>

int
main (int argc, char ** argv)
{
  int tests, i, k;
  char line[201];
  scanf("%d", &tests);
  while (tests--) {
    scanf("%s", line);
    k = strlen(line) / 2;
    for (i = 0; i < k; i += 2)
      putchar(line[i]);
    putchar('\n');
  }
  return 0;
}
