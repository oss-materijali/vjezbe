#include <stdio.h>

/*
5. Napisati rekurzivnu funkciju koja računa sljedeću sumu:

S(n) = 1/(1*3) + ... + 1/(n*(n+2))

Napomena: za dovoljno veliki n rezultat se približava 3/4
*/

float fun(int n) {
  if (n < 1) {
    return 0;
  }

  float formula_sol = 1.0 / (n * (n + 2));
  return formula_sol + fun(n - 1);
}

int main(void) {

  printf("%f\n", fun(5));
  printf("%f\n", fun(50));
  printf("%f\n", fun(500));
  return 0;
}
