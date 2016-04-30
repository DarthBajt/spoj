/* 25.04.2016 */

#include <stdio.h>
#include <ctype.h>

int
main (int argc, char ** argv)
{
  char znak;
  int spacja = 0;
  while (scanf("%c", &znak) != EOF) {
    putchar(znak);
  }
  return 0;
}
