/* 14.04.2016 */

#include <stdio.h>
#include <ctype.h>

int
main (int argc, char ** argv)
{
  char znak;
  int tag = 0;
  while (scanf("%c", &znak) != EOF) {
    if (znak == '<')
      tag++;
    if (znak == '>')
      tag--;
    if (tag)
      znak = toupper(znak);
    putchar(znak);
  }
  return 0;
}
