#include <stdio.h>

/*
2. * Napisati strukturu kvadar. Napisati funkciju koja računa oplošje i volumen
kvadra. Za računanje oplošja i volumena kvadra napisati predprocesorsku
direktivu.
*/

#define VOLUME(a, b, c) (a * b * c)
#define AREA(a, b, c) (2 * (a*b + a*c + c*b))

typedef struct {
  int x, y, z;
} Cuboid;

void calc_cuboid_V_A(int a, int b, int c, int *volume, int *area);

int main(void) {

  Cuboid cubo_a = {1, 2, 3};
  int volume, area;

  calc_cuboid_V_A(cubo_a.x, cubo_a.y, cubo_a.z, &volume, &area);

  printf("x: %d\n y: %d\n z %d\n", cubo_a.x, cubo_a.y, cubo_a.z);
  printf("\nvolume: %d\narea: %d\n", volume, area);

  return 0;
}

void calc_cuboid_V_A(int a, int b, int c, int *volume, int *area) {
  *volume = VOLUME(a, b, c);
  *area = AREA(a, b, c);
  return;
}
