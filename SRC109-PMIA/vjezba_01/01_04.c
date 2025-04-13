#include <stdio.h>

/*
4. Napisati program u kojem korisnik unosi granice dvaju zatvorenih intervala
[a, b] i [c, d] i ispisuje njihov presjek.

Primjer: Za intervale [1, 5] i [-3,
2], presjek je interval [1, 2], a za intervale [-3.5, 2] i [4, 6.5] presjek je
prazan skup.

Napomena: Za rješavanje ovog zadatka nisu potrebne petlje.
*/

int main(void) {
  float a, b, c, d = 0;

  printf("Format: x, y\n");
  printf("Unesi prvi interval:\n");
  scanf("%f, %f", &a, &b);
  printf("Unesi drugi interval:\n");
  scanf("%f, %f", &c, &d);
  printf("\n");

  if (a > b || c > d) {
    printf("Nevaljani interval(i), pocetak mora biti manji od zavrsetka "
           "intervala!\n");
    return 1;
  }

  float x, y;
  /* x = (a > c) ? a : b; */
  if (a > c) {
    x = a;
  } else {
    x = c;
  }

  /* y = (d < b) ? d : b; */
  if (d < b) {
    y = d;
  } else {
    y = b;
  }

  if (x > y) {
    printf("Prazan skup.\n");
  } else {
    printf("Interval: [%f, %f]\n", x, y);
  }

  return 0;
}
