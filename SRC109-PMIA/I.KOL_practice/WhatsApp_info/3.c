#include <stdio.h>

/*
Napisi funkciju
param: unsigned char n
na neparnim mjestima pretvori 0 u 1
i vrati novi broj znamenke
(na parnim mjestima se ne mijenja)

Primjer: 33 => 100001
Tip:
  pos = 0
  n & (1<<pos)
  n | (1 << pos)
*/

unsigned char fun(unsigned char n) {
  int i = 0;
  int sol = n;
  while (n > 0) {
    if (i % 2 != 0)
      sol ^= (1 << i);

    n >>= 1;
    i++;
  }

  return sol;
}

int main(void) {
  printf("%d => %d (exp = %d)", 0b100001, fun(0b100001), 0b001011);
  return 0;
}
