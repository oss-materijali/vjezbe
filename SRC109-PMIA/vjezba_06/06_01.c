#include <stdio.h>
#include <stdlib.h>

/*
1. Napisati funkciju koja iz dva niza brojeva
kreira treći u kojem su
svi članovi prvog i drugog niza bez duplikata.
Memoriju za niz alocirati dinamički.
*/

void print_arr(int a[], int size);
int *remove_duplicate(int a[], int b[], int size_a, int size_b, int *size_c);
int is_duplicate(int n, int arr[], int arr_size);

int main(void) {
  int arr_a[4] = {2, 4, 6, 8};
  int arr_b[6] = {1, 2, 3, 4, 5, 6};
  int size_a = sizeof(arr_a) / sizeof(arr_a[0]);
  int size_b = sizeof(arr_b) / sizeof(arr_b[0]);
  int size_c;

  int *arr_c = remove_duplicate(arr_a, arr_b, size_a, size_b, &size_c);
  if (!arr_c) return 1;

  print_arr(arr_a, size_a);
  print_arr(arr_b, size_b);
  print_arr(arr_c, size_c);

  free(arr_c);
  return 0;
}

int *remove_duplicate(int a[], int b[], int size_a, int size_b, int *size_c) {
  int *c = (int *)malloc((size_a + size_b) * sizeof(int));
  if (!c) return NULL;

  int c_iter = 0;

  for (int i = 0; i < size_a; i++) {
    if (!is_duplicate(a[i], b, size_b)) {
      c[c_iter] = a[i];
      c_iter++;
    }
  }

  for (int i = 0; i < size_b; i++) {
    if (!is_duplicate(b[i], a, size_a)) {
      c[c_iter] = b[i];
      c_iter++;
    }
  }

  // cast into a smaller array
  int *smaller_c = (int *)realloc(c, (c_iter * sizeof(int)));
  *size_c = c_iter;

  return smaller_c;
}

int is_duplicate(int n, int arr[], int arr_size) {
  for (int i = 0; i < arr_size; i++)
    if (n == arr[i])
      return 1;
  return 0;
}

void print_arr(int a[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", a[i]);
  printf("\n");
}
