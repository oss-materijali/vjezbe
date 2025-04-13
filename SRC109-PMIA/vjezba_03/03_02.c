#include <stdio.h>

/*
2.* Napisati funkciju koja za neparne vrijednosti argumenta n
vraća vrijednost 3 * n + 1, a za parne n/2.

Napisati drugu funkciju koja za broj n ispisuje niz brojeva tako
da je svaki sljedeći broj dobijen na opisan način.
Niz završava jedinicom (Collatzova slutnja).

Funkcija treba vratiti broj koraka do jedinice.

Primjer: Za n = 3, niz je 3, 10, 5, 16, 8, 4, 2, 1,a koraka je 7
*/

int fun_1(int n) {
  int sol = (n % 2 == 0) ? n / 2 : 3 * n + 1;
  return sol;
}

int fun_2(int n) {
  int i = 0;
  while (n != 1) {
    n = fun_1(n);
    printf("%d, ", n);
    i++;
  }
  printf("\n");

  return i;
}

int main(void) {
  printf("koraka: %d\n", fun_2(3));

  return 0;
}
