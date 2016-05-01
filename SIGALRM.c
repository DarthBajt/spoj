/* 30.04.2016 */

#include <unistd.h>

int
main (int argc, char ** argv)
{
  alarm(1);
  sleep(2);
  return 0;
}
