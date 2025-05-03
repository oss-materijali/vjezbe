#include <stdio.h>
#include <stdlib.h>

/*
6. Napisati funkciju koja između dva niza umetne treći
čiju duljinu i vrijednosti unosi korisnik.
Funkcija vraća novonastali niz (i njegovu duljinu).
Za alokaciju novonastalog niza koristiti dinamičku alokaciju.

Primjer: Za nizove [1, 2, 3] i [4, 5, 6]i treći niz duljine n = 4 i
vrijednosti niza [11, 12, 13, 14], novi niz ima elemente [1, 2, 3, 11, 12,
13, 14, 4, 5, 6]
*/

int *insert_arr(int l[], int l_size, int r[], int r_size, int arr[],
                int arr_size);
void input_arr(int arr[], int size);
void print_arr(int a[], int size);

int main(void) {
  int a[3] = {1, 2, 3};
  int b[3] = {4, 5, 6};
  int a_size = sizeof(a) / sizeof(a[0]);
  int b_size = sizeof(b) / sizeof(b[0]);

  int n;
  printf("Unesi n: ");
  scanf("%d", &n);
  int arr[n];

  printf("\nUnesi array (velicine: %d):\n", n);
  input_arr(arr, n);

  int *new_arr = insert_arr(a, a_size, b, b_size, arr, n);
  printf("\nNovi array: ");
  print_arr(new_arr, a_size + b_size + n);

  return 0;
}

int *insert_arr(int l[], int l_size, int r[], int r_size, int arr[],
                int arr_size) {
  int *new_arr = (int *)calloc((l_size + r_size + arr_size), sizeof(int));
  int new_arr_iter = 0;

  for (int i = 0; i < l_size; i++) {
    new_arr[new_arr_iter] = l[i];
    new_arr_iter++;
  }
  for (int i = 0; i < arr_size; i++) {
    new_arr[new_arr_iter] = arr[i];
    new_arr_iter++;
  }
  for (int i = 0; i < r_size; i++) {
    new_arr[new_arr_iter] = r[i];
    new_arr_iter++;
  }

  return new_arr;
}

void input_arr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("\tarr[%d]: ", i);
    scanf("%d", &arr[i]);
  }
}

void print_arr(int a[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", a[i]);
  printf("\n");
}
