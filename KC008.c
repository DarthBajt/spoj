/* 30.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  long long int suma, suma_sum = 0;
  int a;
  while(scanf("%d", &a) != EOF) {
    if (a == 0) {
      puts("0");
      continue;
    }
    suma = a;
    do {
      scanf("%d", &a);
      suma += a;
    } while (a != 0);
    printf("%lld\n", suma);
    suma_sum += suma;
  }

  printf("%lld\n", suma_sum);
  return 0;
}
