#include <stdio.h>

/*
2. Napisati funkciju koja provjerava
ima li unsigned broj n vise jedinica od nula
(iskljucivsivodece nule).

Primjer: Broj 25 ciji je binarni zapis 11001 ima vise jedinica nego nula,
dok broj 16 ciji je binarni zapis 10000 nema.
*/

void fun(unsigned n) {
  int orig_n = n;
  int ones = 0;
  int zeros = 0;

  while (n > 0) {
    if (n & 1) {
      ones++;
    } else {
      zeros++;
    }
    n = n >> 1;
  }

  if (ones > zeros) {
    printf("%d ima vise jedinica.\n", orig_n);
  } else if (zeros > ones) {
    printf("%d ima vise nula.\n", orig_n);
  } else {
    printf("%d ima jednak broj jedinica i nula.\n", orig_n);
  }
}

int main(void) {
  unsigned n;

  n = 25;
  fun(n);
  n = 16;
  fun(n);
  n = 150;
  fun(n);

  return 0;
}
