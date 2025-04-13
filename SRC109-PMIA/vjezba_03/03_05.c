#include <stdio.h>

/*
5.* Napisati funkciju koja setira sve bitove
jednog bajta u danom int broju.

Broj i redni broj bajta su parametri funkcije.

Primjer: Za broj 200 čiji je binarni zapis 11001000 i redni broj bajta 2, novi
binarni broj je 1111111111001000, što je binarni zapis broja 65480.
*/

/*
  4.       3.       2.       1.
  00000000 00000000 11111111 11001000
*/

int function(int x, int n) {
  int mask = 0b11111111;

  if ((n <= 0) || (n > 4)) {
    printf("Nevalidan redni broj bajta!\n");
    return 0;
  }

  mask = mask << (8 * (n - 1));
  x = mask | x;

  return x;
}

int main(void) {
  printf("sol: %d\n", function(200, 2));

  return 0;
}
