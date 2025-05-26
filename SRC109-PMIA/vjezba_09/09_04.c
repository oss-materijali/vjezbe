#include <stdio.h>

/*
4. Napisati funkciju koja će za niz razlomaka vratiti vrijednosti najvećeg i
najmanjeg razlomka.
*/

typedef struct {
  int x, y;
} Fraction;

void frac_highest_lowest(Fraction arr[], int len, Fraction *high, Fraction *low);

int main(void) {
  Fraction arr[4] = {{5, 6}, {1, 3}, {-3, 2}, {1, -2}};
  Fraction high, low;
  int len = sizeof(arr) / sizeof(arr[0]);

  frac_highest_lowest(arr, len, &high, &low);

  printf("high: %d/%d\nlow: %d/%d\n", high.x, high.y, low.x, low.y);

  return 0;
}

void frac_highest_lowest(Fraction arr[], int len, Fraction *high, Fraction *low){
  double dec_arr, dec_high, dec_low;
  *high = *low = arr[0];
  for (int i = 0; i < len; i++) {
    // printf("arr[%d].x/y: %d/%d\n", i, arr[i].x, arr[i].y);
    dec_arr = (double)arr[i].x/arr[i].y;
    dec_high = (double)high->x/high->y;
    dec_low = (double)low->x/low->y;

    if (dec_arr > dec_high)
      *high = arr[i];
    if (dec_arr < dec_low)
      *low = arr[i];
  }
}
