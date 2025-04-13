#include <stdio.h>

/*
3. Napisati funkciju koja za realne brojeve a i b
zbraja cijele brojeve u intervalu <a, b>
(ne ukljucujuci a i b).

Primjer: Za interval < -3.3,2.1> funkcija vraca -3,
a za interval <3.3,7.0> funkcija vraca 15.
*/

int fun(float a, float b) {

  int x, y;
  x = a;
  y = b;

  int sum = 0;

  int i;
  for (i = x + 1; i < y; i++) {
    // printf("%d\n", i);
    sum = sum + i;
  }

  return sum;
}

int main(void) {
  float a, b;
  a = -3.3;
  b = 2.1;
  printf("sol: %d\n", fun(a, b));
  return 0;
}
