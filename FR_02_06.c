/* 01.05.2016 */

#include <stdio.h>

struct dane {
  char imie[21];
  int masa;
  int wzrost;
};

int
main (int argc, char ** argv)
{
  int  n, i;
  double bmi;
  struct dane d[101];
  scanf("%d\n", &n);
  for (i = 0; i < n; ++i)
    scanf("%s %d %d\n", d[i].imie, &d[i].masa, &d[i].wzrost);
  puts("niedowaga");
  for (i = 0; i < n; ++i)
    if ((d[i].masa / (d[i].wzrost * d[i].wzrost / 10000.0)) < 18.5)
      printf("%s\n", d[i].imie);
  putchar('\n');

  puts("wartosc prawidlowa");
  for (i = 0; i < n; ++i) {
    bmi = (d[i].masa / (d[i].wzrost * d[i].wzrost / 10000.0));
    if (bmi >= 18.5 && bmi < 25.0)
      printf("%s\n", d[i].imie);
  }
  putchar('\n');

  puts("nadwaga");
  for (i = 0; i < n; ++i)
    if ((d[i].masa / (d[i].wzrost * d[i].wzrost / 10000.0)) >= 25.0)
      printf("%s\n", d[i].imie);
  return 0;
}
