#include <stdio.h>

/*
5. Sortirajte niz alternirajuci:
najmanji element, najveci, drugi najmanji, drugi najveci
itd.

Primjer: Za niz [4, -5, 3, 2, -1],
preslozeni niz je [-5, 4, -1, 3, 2].
*/

void swap(int *a, int *b);

void alt_sort(int arr[], int arr_size) {
  int toggle = 0; // 0 => low, 1 => high

  for (int i = 0; i < arr_size; i++) {
    for (int j = i + 1; j < arr_size; j++) {

      if ((toggle && arr[i] < arr[j]) || (!toggle && arr[i] > arr[j])) {
        swap(&arr[i], &arr[j]);
      }
    }
    toggle = !toggle;
  }
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void print_arr(int arr[], int arr_size) {
  int i;
  for (i = 0; i < arr_size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[5] = {4, -5, 3, 2, -1};
  int arr_size = sizeof(arr) / sizeof(arr[0]);

  print_arr(arr, arr_size);
  alt_sort(arr, arr_size);
  print_arr(arr, arr_size);

  return 0;
}
