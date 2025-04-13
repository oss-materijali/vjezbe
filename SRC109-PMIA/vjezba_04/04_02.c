#include <stdio.h>

/*
2. * Napisati rekurzivnu funkciju koja
ispituje je li prirodni broj palindrom.
*/

int fun(int n, int reverse_n) {
  if (n <= 0) {
    return reverse_n;
  }

  return fun((n / 10), ((n % 10) + reverse_n * 10));
}

int fun_bool(int n) { return (n == fun(n, 0)); }

int main(void) {
  printf("%d\n", fun_bool(12321));
  printf("%d\n", fun_bool(32321));
  return 0;
}
