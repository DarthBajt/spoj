/* 01.05.2016 */

#include <stdio.h>
#include <ctype.h>

int
main (int argc, char ** argv)
{
  char bufor[1001], znak;
  char *mors[] = {
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    ".-..",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    "..-.",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--.."
  };
  int i, j;
  while (fgets(bufor, 1001, stdin)) {
    for (i = 0; bufor[i] != '\n'; ++i) {
      znak = bufor[i];
      if (isspace(bufor[i]))
        putchar('/');
      else {
        if (islower(znak))
          znak = toupper(znak);
        znak -= 'A';
        j = 0;
        while (mors[znak][j])
          putchar(mors[znak][j++]);
        putchar('/');
      }
    }
    putchar('\n');
  }
  return 0;
}
