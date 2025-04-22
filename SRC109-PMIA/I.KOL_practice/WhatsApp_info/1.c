#include <stdio.h>

/*
Napisati funkciju koja prezlozi niz brojeva
tako da na pocetku budu parni, a na kraju neparni
(prva polovica => parni)
(druga polovica => neparni)

Primjer:
ulaz => {2, 4, 5, 7, 4, 8, 3}
izlaz => {2, 4, 4, 8, 5, 7, 3} // na pocetku parni na kraju neparni

"2 for petlje"
*/

void swap(int *a, int *b);

void fun(int arr[], int size) {

  int odd[size], even[size];
  int odd_count, even_count;
  odd_count = even_count = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      even[even_count] = arr[i];
      even_count++;
    } else {
      odd[odd_count] = arr[i];
      odd_count++;
    }
  }

  for (int i = 0; i < even_count; i++)
    arr[i] = even[i];
  for (int j = 0; j < odd_count; j++)
    arr[j + even_count] = odd[j];
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void print_arr(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main(void) {

  int a[7] = {2, 4, 5, 7, 4, 8, 3};
  int a_size = sizeof(a) / sizeof(a[0]);
  print_arr(a, a_size);
  fun(a, a_size);
  print_arr(a, a_size);

  return 0;
}
