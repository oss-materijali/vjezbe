#include <stdio.h>

/*
 Napisati funkciju koja rekurzivno računa
 sumu prvih n brojeva djeljivih sa m
*/

int fun(int n, int m) {
  if (n == 0) {
    return 0;
  }

  if (n % m == 0) {
    return n + fun(n - 1, m);
  }

  return 0 + fun(n - 1, m);
}

int main(void) {

  printf("%d\n", fun(10, 3));
  return 0;
}
