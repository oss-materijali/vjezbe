#include <stdio.h>

/*
6. Napisati funkciju koje će ispitati ima li prirodni broj n
simetričan binarni zapis.

"binarni palindrom"
*/

// NOTE: vjerovatno postoji bolje rijesenje

int bit_amount(int n);

void fun(unsigned int n) {
  int size = bit_amount(n);
  int first_mask = 1 << (size - 1);
  int last_mask = 1;
  int flag = 0;
  int x, y;

  for (int i = 0; i < (size >> 1); i++) {

    x = (n & first_mask) ? 1 : 0;
    y = (n & last_mask) ? 1 : 0;

    if (x != y) {
      flag++;
    }

    first_mask = first_mask >> 1;
    last_mask = last_mask << 1;
  }

  if (!flag) {
    printf("Broj je binarni palindrom.\n");
  } else {
    printf("Broj NIJE binarni palindrom!\n");
  }
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
  fun(0b10110101101);
  fun(0b1010);

  return 0;
}
