#include <stdio.h>

/*
Napisati funkciju koja provjerava je li binarni zapis nekog broja
takav da su sve jedinice ispred nula

Primjer:
  248=11111000 => 1
  9=1001       => 0

---

"preslozi sve nule na kraj" varijanta zadatka!

"ukoliko broj ima susjedne jedinice, izmedju nih ubaci 0" varijanta zadatka!

Primjer:
  1011 => 10101
*/

int check_ones(int n) {
  int seen_one = 0;

  while (n > 0) {
    if (n & 1)
      seen_one = 1;
    else {
      if (seen_one)
        return 0;
    }

    n >>= 1;
  }

  return 1;
}

int end_with_zeros(int n) {
  int x, o;
  x = o = 0;

  while (n > 0) {
    if (n & 1)
      x++;
    else
      o++;
    n >>= 1;
  }

  int sol = (1 << x) - 1;
  sol <<= o;
  return sol;
}

int insert_zero_inbetween(int n) {
  int sol = 0;

  while (n > 0) {
    if ((n&0b11) == 0b11) {
      sol |= n&1;
      sol <<= 1;
    } else{
      sol |= n & 1;
    }
    sol <<= 1;
    n >>= 1;
  }
  sol >>= 1;

  // this just reverses the order of sol
  // (as sol is reversed of n)
  n = 0;
  while (sol > 0) {
    n |= sol & 1;
    n <<= 1;
    sol >>= 1;
  }
  n >>= 1;

  return n;
}

int main(void) {
  printf("%d => %d\n%d => %d", 0b11111000, check_ones(0b11111000), 0b1001,
         check_ones(0b1001));

  printf("\n%d => %d (exp = %d)", 0b1001, end_with_zeros(0b1001), 0b1100);

  printf("\n%d => %d (exp = %d)", 0b1101, insert_zero_inbetween(0b1101),
         0b10101);

  return 0;
}
