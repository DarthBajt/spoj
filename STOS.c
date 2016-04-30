/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  char znak[2];
  int index = 0, stos[10], a;
  while (scanf("%s", znak) != EOF) {
    if (znak[0] == '+') {
      scanf("%d", &a);
      if (index == 10)
        puts(":(");
      else {
        stos[index++] = a;
        puts(":)");
      }
    } else if (znak[0] == '-') {
      if (index == 0)
        puts(":(");
      else
        printf("%d\n", stos[--index]);
    }
  }
  return 0;
}
