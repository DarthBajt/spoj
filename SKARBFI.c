/* 30.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  int testow, n, i, kierunek, krokow, kierunki[4];
  scanf("%d", &testow);
  while (testow--) {
    kierunki[0] = kierunki[1] = kierunki[2] = kierunki[3] = 0;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
      scanf("%d %d", &kierunek, &krokow);
      kierunki[kierunek] += krokow;
    }
    if (kierunki[0] == kierunki[1] && kierunki[2] == kierunki[3])
      puts("studnia");
    else {
      if (kierunki[0] > kierunki[1])
        printf("0 %d\n", kierunki[0] - kierunki[1]);
      else if (kierunki[0] < kierunki[1])
        printf("1 %d\n", kierunki[1] - kierunki[0]);
      if (kierunki[2] > kierunki[3])
        printf("2 %d\n", kierunki[2] - kierunki[3]);
      else if (kierunki[2] < kierunki[3])
        printf("3 %d\n", kierunki[3] - kierunki[2]);
    }
  }
  return 0;
}
