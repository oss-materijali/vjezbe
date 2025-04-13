#include <stdio.h>

/*
2. Napisati rekurzivnu funkciju koja računa sumu od n elemenata
1 - (1/4) + (1/9) - (1/16) + (1/25) - ...
*/

// 1 / (n*n)

float fun(int n) {
  if (n == 0) {
    return 0;
  }

  float calc = 0;
  calc = 1.0 / (n * n);

  if (n % 2 == 0) {
    calc = -calc;
  }

  printf("%f ", calc);
  return calc + fun(n - 1);
}

int main(void) {
  int n = 5;
  printf("\nn: %d\nfun(n): %f\n", n, fun(n));
  return 0;
}
