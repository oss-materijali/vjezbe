#include <stdio.h>

/*
5. Napisati funkciju koja preokreće broj te
vraća sumu originalnog i preokrenutog broja.
*/

int fun(int n) {

  int new = 0;
  int tmp = n;

  while (tmp > 0) {
    new = (new * 10) + (tmp % 10);
    tmp = tmp / 10;
  }

  return new + n;
}

int main(void) {
  int n = 123;
  printf("n: %d\nfun(n): %d\n", n, fun(n));
  return 0;
}
