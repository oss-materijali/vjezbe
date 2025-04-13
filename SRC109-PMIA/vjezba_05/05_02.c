#include <stdio.h>

/*
2. Napisati funkciju koja za dva prirodna broja računa
i vraća rezultat cjelobrojnog dijeljenja
i ostatak pri dijeljenju.
*/

void fun(int m, int n, int *division, int *modulo) {
  *division = m / n;
  *modulo = m % n;
}

int main() {
  int m = 7;
  int n = 3;
  int division, modulo;

  fun(m, n, &division, &modulo);

  printf("Rezultat cjelobrojnog dijeljenja: %d\n", division);
  printf("Ostatak pri dijeljenju: %d\n", modulo);

  return 0;
}
