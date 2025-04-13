#include <stdio.h>

/*
4. Napisati funkciju koja za niz cijelih brojeva
vraca poziciju (indeks)
najmanjeg i najveceg broja u nizu.

Primjer: Za niz [4, -5, 3, 2, -1],
funkcija vraca 1 i 0.
*/

void fun(int arr[], int arr_size, int *low, int *high) {
  int i;
  for (i = 0; i < arr_size; i++) {
    if (arr[i] > arr[*high]) {
      *high = i;
    }
    if (arr[i] < arr[*low]) {
      *low = i;
    }
  }
}

int main() {
  int arr[5] = {4, -5, 3, 2, -1};
  int arr_size = sizeof(arr) / sizeof(arr[0]);

  int lowest_index, highest_index;
  lowest_index = highest_index = 0;

  fun(arr, arr_size, &lowest_index, &highest_index);

  printf("lowest_index: %d\n"
         "highest_index: %d\n",
         lowest_index, highest_index);

  return 0;
}
