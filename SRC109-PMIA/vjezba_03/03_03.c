#include <stdio.h>

/*
3. Koristeći bitovne operatore napisati funkciju koja ispisuje broj n u binarnom
zapisu.
Vodeće nule ne ispisivati.
Funkcija treba vratiti broj ispisanih znamenki.

Primjer: Za broj n = 200, ispisuje se 11001000, a vraća 8.
*/

int bit_amount(int n);

int fun(int n) {
  int n_size = bit_amount(n);
  int mask = 1 << (n_size - 1); // bit_amount(mask) == bit_amount(n)

  printf("binarno: ");

  for (int i = n_size; i > 0; i--) {
    if (n & mask) {
      printf("1");
    } else {
      printf("0");
    }
    mask = mask >> 1;
  }

  printf("\n");

  return n_size;
}

int bit_amount(int n) {
  int amount = 0;

  if (n == 0) {
    amount = 1;
    return amount;
  }

  while (n > 0) {
    amount++;
    n = n >> 1;
  }

  return amount;
}

int main(void) {
  printf("vraceno: %d\n", fun(200));
  return 0;
}
