#include <stdio.h>

/*
1. Napisati funkciju koja za dva broja a i b
vraca njihovu razliku kvadrata a^2 - b^2 i
kvadrat sume (a + b)^2 .

Primjer: Za brojeve a = 3, b = 4
razlika kvadrata je -5, a kvadrat sume 49.
*/

// "moze bit varijacija di se trazi samo 2 param za fun"

void fun(int a, int b, int *sub_square, int *sum_square) {
  *sub_square = (a * a) - (b * b);
  *sum_square = (a + b) * (a + b);
}

int main(void) {
  int a, b;
  int sub_square = 0;
  int sum_square = 0;

  a = 3;
  b = 4;

  fun(a, b, &sub_square, &sum_square);

  printf("sub_square: %d\n"
         "sum_square: %d\n",
         sub_square, sum_square);

  return 0;
}
