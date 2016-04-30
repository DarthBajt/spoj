/* 14.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  double PI = 3.141592654, r, d;
  scanf("%lf", &r);
  scanf("%lf", &d);
  printf("%.2lf\n", PI * ((r * r) - (d*d / 4)));
  return 0;
}
