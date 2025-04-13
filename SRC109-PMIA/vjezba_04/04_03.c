#include <stdio.h>

/*
Napisati rekurzivnu funkciju koja za dani broj n
ispisuje sve neparne brojeve unazad do 1
*/

void fun(int n) {
  if (n < 1) {
    return;
  }

  if (n % 2 != 0) {
    printf("%d\n", n);
  }

  return fun(n - 1);
}

int main(void) {
  fun(10);
  return 0;
}
