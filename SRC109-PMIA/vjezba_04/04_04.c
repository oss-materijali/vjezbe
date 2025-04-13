#include <stdio.h>

/*
4. * Napisati program koji će za uneseni n ispisati mrežu n×n sljedećeg oblika
  (primjer za n=4):

  * * * *
  * * *
  * *
  *
  *
  * *
  * * *
  * * * *

  Zadatak riješiti tako da iscrtavanje jedne linije napravite u jednoj rekurzivnoj
  funkciji, a zatim u drugoj rekurzivnoj funkciji ispišete cijelu mrežu.
*/

void fun_1(int n) {
  if (n < 0) {
    n = -n;
  }
  if (n == 0) {
    return;
  }

  printf("* ");

  return fun_1(n - 1);
}

void fun_2(int n, int N) {
  if (n < -N) {
    return;
  }

  fun_1(n);
  if (n != 0)
    printf("\n");

  return fun_2(n - 1, N);
}

int main(void) {
  int n = 4;
  fun_2(n, n);

  return 0;
}
