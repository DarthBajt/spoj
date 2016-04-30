/* 25.04.2016 */

#include <stdio.h>
#include <string.h>

int
main (int argc, char ** argv) {
  char a[1001], b[1001], sym[3];
  int i, alen, blen, flag;
  while(scanf("%s %s %s", a, sym, b) != EOF) {
    alen = strlen(a);
    blen = strlen(b);
    flag = 1;
  	if (sym[0] == '=') {
  		if(strcmp(a, b) == 0) puts("1"); else puts("0");
  	} else if (sym[0] == '!') {
  		if(strcmp(a, b) != 0) puts("1"); else puts("0");
  	} else if (sym[0] == '<') {
      if (alen < blen)
        puts("1");
      else if (alen > blen)
        puts("0");
      else {
        for (i = 0; i < alen; ++i)
          if (a[i] > b[i]) {
            flag = 0;
            break;
          }
        if (flag) puts("1"); else puts("0");
      }
  	} else {
      if (alen > blen)
        puts("1");
      else if (alen < blen)
        puts("0");
      else {
        for (i = 0; i < alen; ++i)
          if (a[i] < b[i]) {
            flag = 0;
            break;
          }
        if (flag) puts("1"); else puts("0");
      }
  	}
  }
  return 0;
}
