#include <stdio.h>

/*
6. * Napisati funkciju koja će za uneseni n ispisati mrežu m x n sljedećeg
oblika (primjer za m = 7, n = 5):

      * - * - *
      - * - * -
      * - * - *
      - * - * -
      * - * - *
      - * - * -
      * - * - *

*/

// TW: nested if's

void cool_pattern(int m, int n) {
  int i, j;
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {

      if (i % 2 == 0) {
        if (j % 2 == 0) {
          printf("* ");
        } else {
          printf("- ");
        }
      }

      if (i % 2 != 0) {
        if (j % 2 != 0) {
          printf("* ");
        } else {
          printf("- ");
        }
      }
      //
    }
    printf("\n");
  }
  printf("\n");
}

int main(void) {

  cool_pattern(7, 5);
  cool_pattern(6, 8);

  return 0;
}
