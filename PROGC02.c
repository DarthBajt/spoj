/* 01.05.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  static int kody[256], i, znak;
  while (scanf("%c", &znak) != EOF ) {
    znak = (znak < 0) ? 255 + znak : znak;
    kody[znak]++;
  }
  for (i = 0; i < 256; ++i)
    if (kody[i] > 0)
      printf("%d %d\n", i, kody[i]);
  return 0;
}
