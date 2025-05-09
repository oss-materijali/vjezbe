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
                int arr_size, int *new_arr_size);
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
  if (n < 0) return 2;

  int arr[n];

  printf("\nUnesi niz (velicine: %d):\n", n);
  input_arr(arr, n);

  int new_arr_size;
  int *new_arr = insert_arr(a, a_size, b, b_size, arr, n, &new_arr_size);
  if (!new_arr) return 1;

  printf("\nNovi niz: ");
  print_arr(new_arr, a_size + b_size + n);
  printf("Duljina novog niza: %d", new_arr_size);

  free(new_arr);
  return 0;
}

int *insert_arr(int l[], int l_size, int r[], int r_size, int arr[],
                int arr_size, int *new_arr_size) {

  *new_arr_size = l_size + r_size + arr_size;
  int *new_arr = (int *)calloc(*new_arr_size, sizeof(int));
  if (!new_arr) return NULL;

  int new_arr_iter = 0;

  for (int i = 0; i < l_size; i++) // start/left
    new_arr[new_arr_iter++] = l[i];
  for (int i = 0; i < arr_size; i++) // insert in center
    new_arr[new_arr_iter++] = arr[i];
  for (int i = 0; i < r_size; i++) // end/right
    new_arr[new_arr_iter++] = r[i];

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
