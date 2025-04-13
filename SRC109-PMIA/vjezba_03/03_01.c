#include <stdio.h>

/*
1. Napisati funkciju sa prototipom int funkcija(int a, int b);,
koja vraća razliku a-b ako je a ≥ b, a inače vraća zbroj a+b.
Koristiti uvjetni operator (?:).
Zabranjeno je koristiti if naredbu.
*/

int fun(int a, int b);

int main() {
  printf("%d\n", fun(1, 10));
  printf("%d\n", fun(10, 1));

  return 0;
}

int fun(int a, int b) {
  int sol = (a >= b) ? a - b : a + b;
  return sol;
}
