#include <stdio.h>

/*
4. Napisati funkciju koja računa koliko znamenki ima uneseni unsigned broj.
Koristiti naredbu while.
*/

int funckija(unsigned int num) {

  if (num == 0) {
    return 1;
  }

  int i = 0;
  while (num != 0) {
    num = num / 10;
    i = i + 1;
  }

  return i;
}

int main(void) {

  unsigned int num = 12345;
  printf("Broj: %d\n", num);
  printf("Broj znamenki: %d\n", funckija(num));

  num = 0;
  printf("Broj: %d\n", num);
  printf("Broj znamenki: %d\n", funckija(num));

  return 0;
}
