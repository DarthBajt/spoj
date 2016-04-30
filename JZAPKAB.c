/* 15.04.2016 */

#include <stdio.h>

int
main (int argc, char ** argv)
{
  char napis[26];
  int liczba = 0, i, alfabet[127];

  alfabet['a'] = 1;
  alfabet['b'] = 2;
  alfabet['c'] = 3;
  alfabet['d'] = 4;
  alfabet['e'] = 5;
  alfabet['f'] = 6;
  alfabet['g'] = 7;
  alfabet['h'] = 8;
  alfabet['i'] = 9;
  alfabet['k'] = 10;
  alfabet['l'] = 20;
  alfabet['m'] = 30;
  alfabet['n'] = 40;
  alfabet['o'] = 50;
  alfabet['p'] = 60;
  alfabet['q'] = 70;
  alfabet['r'] = 80;
  alfabet['s'] = 90;
  alfabet['t'] = 100;
  alfabet['v'] = 200;
  alfabet['x'] = 300;
  alfabet['y'] = 400;
  alfabet['z'] = 500;
  scanf("%s", napis);
  for (i = 0; napis[i]; ++i)
    liczba += alfabet[napis[i]];
  printf("%d\n", liczba);
  return 0;
}
