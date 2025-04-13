#include <stdio.h>

/*
3. Napisati funkciju koja u niz brojeva umeće drugi niz na mjestu k.
*/

void fun(int a[], int a_size, int b[], int b_size, int k, int sol_arr[]) {

  for (int i = 0; i < k; i++) {
    sol_arr[i] = a[i];
  }
  for (int i = 0; i < b_size; i++) {
    sol_arr[k + i] = b[i];
  }
  for (int i = k; i < a_size; i++) {
    sol_arr[b_size + i] = a[i];
  }
}

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  int arr_a[4] = {1, 2, 3, 4};
  int arr_b[2] = {999, 998};
  int k = 2;

  int arr_a_size = sizeof(arr_a) / sizeof(arr_a[0]);
  int arr_b_size = sizeof(arr_b) / sizeof(arr_b[0]);
  int sol_arr[arr_a_size + arr_b_size];

  fun(arr_a, arr_a_size, arr_b, arr_b_size, k, sol_arr);
  print_array(sol_arr, arr_a_size + arr_b_size);

  return 0;
}
