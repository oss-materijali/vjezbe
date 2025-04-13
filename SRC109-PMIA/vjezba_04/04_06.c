#include <stdio.h>

/*
Napisati rekurzivnu funkciju koja broji
koliko ima jedinica u zapisu broja u binarnom
sustavu.
*/

int fun(int n, int i) {
  if (n == 0) {
    return i;
  }

  if (n & 1) {
    i++;
  }

  return fun(n >> 1, i);
}

int main() {
  printf("%d\n", fun(0b1011011110, 0));
  return 0;
}
