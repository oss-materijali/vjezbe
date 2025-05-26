#include <stdio.h>

/*
3. Definirati strukturu razlomak, te napisati funkcije za 4 osnovne operacije sa
razlomcima.

Napomena: razlomak koji funkcija vraća mora biti skraćen.
*/

typedef struct {
  int x, y;
} Fraction;

Fraction add(Fraction *a, Fraction *b);
Fraction sub(Fraction *a, Fraction *b);
Fraction mux(Fraction *a, Fraction *b);
Fraction div(Fraction *a, Fraction *b);

void shorten(Fraction *a);
void swap(int *a, int *b);
int gcd(int a, int b);

int main(void) {
  Fraction a = {5, 6};
  Fraction b = {1, 2};
  if (!a.y || !b.y) return -1;

  printf("a: %d/%d\nb: %d/%d\n", a.x, a.y, b.x, b.y);

  Fraction mux_ab = mux(&a, &b);
  Fraction div_ab = div(&a, &b);
  Fraction add_ab = add(&a, &b);
  Fraction sub_ab = sub(&a, &b);
  if (!mux_ab.y || !div_ab.y || !add_ab.y || !sub_ab.y) return -1;

  printf("div: %d/%d\n", div_ab.x, div_ab.y);
  printf("mux: %d/%d\n", mux_ab.x, mux_ab.y);
  printf("add: %d/%d\n", add_ab.x, add_ab.y);
  printf("sub: %d/%d\n", sub_ab.x, sub_ab.y);

  return 0;
}

Fraction add(Fraction *a, Fraction *b) {
  Fraction c = {0, 0};
  int lcm = (a->y * b->y) / gcd(a->y, b->y);
  int new_a = a->x * (lcm / a->y);
  int new_b = b->x * (lcm / b->y);
  c.x = new_a + new_b;
  c.y = lcm;
  shorten(&c);
  return c;
}
Fraction sub(Fraction *a, Fraction *b) {
  Fraction c = {0, 0};
  int lcm = (a->y * b->y) / gcd(a->y, b->y);
  int new_a = a->x * (lcm / a->y);
  int new_b = b->x * (lcm / b->y);
  c.x = new_a - new_b;
  c.y = lcm;
  shorten(&c);
  return c;
}
Fraction mux(Fraction *a, Fraction *b) {
  Fraction c = {0, 0};
  c.x = a->x * b->x;
  c.y = a->y * b->y;
  shorten(&c);
  return c;
}
Fraction div(Fraction *a, Fraction *b) {
  Fraction c = {0, 0};
  swap(&b->x, &b->y);
  c = mux(a, b);
  swap(&b->x, &b->y);
  shorten(&c);
  return c;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
void shorten(Fraction *a) {
  int common_factor = gcd(a->x, a->y);
  a->x /= common_factor;
  a->y /= common_factor;
}
