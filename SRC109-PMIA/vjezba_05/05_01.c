#include <stdio.h>

/*
1. Korisnik unosi dva prirodna broja m i n u main funkciji.
Napisati funkciju koja prvi broj prepolovi ako je paran (m/2),
a drugi pomnoži sa 3 i doda mu jedan (3*n+1).
U main funkciji nakon poziva funkcije
ispisati nove vrijednosti m i n.
*/

void fun(int *m, int *n) {
  int x, y;
  x = *m;
  y = *n;

  if (x % 2 == 0) {
    x = x / 2;
  }
  y = (3 * y + 1);

  *m = x; // cleaner this way
  *n = y;
}

int main(void) {
  int m, n;

  printf("Unesi m, n: \nFormat: m, n\n");
  scanf("%d, %d", &m, &n);
  printf("\n");

  fun(&m, &n);

  printf("m i n nakon fun(): %d, %d\n", m, n);

  return 0;
}
