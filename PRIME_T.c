#include <stdio.h>

int
licz (int k)
{
	int c;
	if (k > 1) {
		for(c = 2; c*c <= k; c++)
      if (k % c == 0)
        return 0;
		return 1;
	}
	return 0;
}

int
main (int argc, char ** argv)
{
	int n,l;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &l);
    printf("%s", licz(l) ? "TAK\n" : "NIE\n");
	}
	return 0;
}
