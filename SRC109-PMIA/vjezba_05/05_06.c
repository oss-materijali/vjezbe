#include <stdio.h>

/*
6. Napisati funkciju koja računa medijan
i aritmetičku sredinu niza.
*/

void sort_arr(int a[], int arr_size);

void calc_avg_median(int arr[], int arr_size, int *arr_avg, float *arr_median) {
  int i;
  int sum = 0;
  for (i = 0; i < arr_size; i++) {
    sum += arr[i];
  }
  *arr_avg = sum / arr_size;

  int mid = arr_size / 2;
  if (arr_size % 2 == 0) {
    *arr_median = (arr[mid - 1] + arr[mid]) / 2.0;
  } else {
    *arr_median = arr[mid];
  }
}

// taken from 05_03.c
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

int main(void) {
  int arr[10] = {2, 3, 5, 20, 30, 50, 7, 9, 70, 90};
  int arr_size = sizeof(arr) / sizeof(int);
  int arr_avg;
  float arr_median;

  sort_arr(arr, arr_size);
  calc_avg_median(arr, arr_size, &arr_avg, &arr_median);

  printf("Aritmeticka sredina: %d\n", arr_avg);
  printf("Medijan: %f\n", arr_median);

  return 0;
}
