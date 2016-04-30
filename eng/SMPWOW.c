/* 15.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int i;
  scanf("%d", &i);
  putchar('W');
  while (i--)
    putchar('o');
  puts("w");
  return 0;
}
