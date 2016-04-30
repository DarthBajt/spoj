/* 15.04.2016 */

#include <stdio.h>
#include <ctype.h>

int
main (int argc, char ** argv)
{
  char znak;
  int spacja = 0;
  while (scanf("%c", &znak) != EOF) {
    if (znak == ' ')
      spacja = 1;
    else if (spacja) {
      putchar(toupper(znak));
      spacja = 0;
    } else
      putchar(znak);
  }
  return 0;
}
