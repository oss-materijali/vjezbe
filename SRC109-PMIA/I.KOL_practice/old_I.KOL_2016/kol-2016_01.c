#include <stdio.h>

/*
1. Napisati funkciju koja u binarnom zapisu prirodnog broja
zamjenjuje po dvije susjedne znamenke.
Funkcija vraća novi broj.
Ako je broj znamenki u binarnom zapisu neparan,
vodeća znamenka se ne mijenja.

Primjer: za n = 45 čiji je binarni zapis 101101 novi broj
je 30 koji ima zapis 011110.
*/

int fun(int n) {

  int sol = 0;
  int t;

  int pos = 0;
  while (n > 0) {

    t = n & 3; // two right-most bits

    if (n > 1) {
      t = ((t & 1) << 1) | ((t & 2) >> 1); // swap
    }

    sol = sol | (t << pos);
    pos += 2;
    n = n >> 2;
  }

  return sol;
}

int main(void) {
  int n = 45;
  printf("n: %d\nfun(n): %d\n", n, fun(n));
  n = 0b101;
  printf("n: %d\nfun(n): %d\n", n, fun(n));
  return 0;
}
