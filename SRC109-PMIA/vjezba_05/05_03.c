#include <stdio.h>

/*
Napisati funkciju koja sortira niz.
Za unos niza sa tipkovnice i ispis na konzolu
realizirati napisati dvije odvojene funkcije.
*/

void input_arr(int a[], int arr_size) {
  int i;
  for (i = 0; i < arr_size; i++) {
    printf("[%d]: ", i);
    scanf("%d", &a[i]);
  }
}

void print_arr(int a[], int arr_size) {
  int i;
  for (i = 0; i < arr_size; i++) {
    printf("%d, ", a[i]);
  }
}

void sort_arr(int a[], int arr_size) {
  int i, j, temp;
  for (i = 0; i < arr_size - 1; i++) {
    for (j = i + 1; j < arr_size; j++) {
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main() {
  int arr_size;

  printf("Unesi velicinu niza:\n");
  scanf("%d", &arr_size);

  int arr[arr_size];
  printf("Unesi niz:\n");
  input_arr(arr, arr_size);

  sort_arr(arr, arr_size);

  printf("Sortirani niz: ");
  print_arr(arr, arr_size);

  return 0;
}
