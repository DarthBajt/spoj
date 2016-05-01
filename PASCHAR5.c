/* 01.05.2016 */

#include <stdio.h>
#include <ctype.h>

int
main (int argc, char ** argv)
{
  char znak, *male = "abcdefghijklmnopqrstuvwxyz", *duze = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  while (scanf("%c", &znak) != EOF) {
    if (isdigit(znak))
      putchar((znak - '0' + 5) % 10 + '0');
    else if (znak >= 'A' && znak <= 'Z')
      putchar(duze[(znak - 'A' + 13) % 26]);
      else if (znak >= 'a' && znak <= 'z')
        putchar(male[(znak - 'a' + 13) % 26]);
    else
      putchar(znak);
  }
  return 0;
}
