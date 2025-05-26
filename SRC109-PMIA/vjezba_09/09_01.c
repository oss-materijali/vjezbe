#include <stdio.h>

/*
1. Napisati funkciju koja za tri broja računa i vraća najveći i najmanji
element. Za računanje najvećeg i najmanjeg elementa napisati dvije
predprocesorske direktive.
*/

#define HIGHEST(a, b, c) ((a > b && a > c) ? (a) : ((b > a && b > c) ? (b) : ((c > a && c > b)) ? (c) : (0)))
#define LOWEST(a, b, c) ((a < b && a < c) ? (a) : ((b < a && b < c) ? (b) : ((c < a && c < b)) ? (c) : (0)))

void high_and_low(int a, int b, int c, int *high, int *low);

int main(void) {
  int a = 3;
  int b = -1;
  int c = 2;
  int high, low;

  high_and_low(a, b, c, &high, &low);

  printf("a: %d\nb: %d\nc: %d\n", a, b, c);
  printf("\nhigh: %d\nlow: %d\n", high, low);

  return 0;
}

void high_and_low(int a, int b, int c, int *high, int *low){
  *high = HIGHEST(a, b, c);
  *low = LOWEST(a, b, c);
  return;
}
