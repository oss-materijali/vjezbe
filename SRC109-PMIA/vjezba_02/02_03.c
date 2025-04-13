#include <stdio.h>

/*
3. Napisati funkciju koja za interval [a, b] i cijele brojeve m i n ispisuje
”Fizz” za sve brojeve izmedju a i b koji su djeljivu sa m, ”Buzz” za sve brojeve
djeljive sa n, a ”FizzBuzz” za sve brojeve djeljive i sa m i sa n.
*/

void fizzbuzz(int a, int b, int m, int n) {

  int i = 0;
  for (i = a; i <= b; i = i + 1) {

    if ((i % m == 0) && (i % n == 0)) {
      printf("FizzBuzz\n");
    } else if (i % m == 0) {
      printf("Fizz\n");
    } else if (i % n == 0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", i);
    }
    //
  }
}

int main(void) {

  fizzbuzz(0, 12, 3, 2);

  return 0;
}
