#include <stdio.h>

/*
5. * Napisati program u kojem korisnik unosi
broj članova niza (broj manji od N) i sami niz.
Za niz alocirati N = 100 memorijskih lokacija.
Nakon toga unosi dva broja m i n koji su manji od broja članova niza.

Napisati funkciju koja računa sumu elemenata niza
i broj elemenata između m-tog i n-tog člana.
*/

void sliced_arr_fun(int arr[], int m, int n, int *sliced_arr_elem_amount,
                    int *sliced_arr_sum) {

  for (int i = m + 1; i < n; i++) {
    *sliced_arr_sum += arr[i];
    *sliced_arr_elem_amount += 1;
  }
}

// taken from 05_03.c
void input_arr(int a[], int arr_size) {
  int i;
  for (i = 0; i < arr_size; i++) {
    printf("[%d]: ", i);
    scanf("%d", &a[i]);
  }
}

int main() {
  static int N = 100;

  int arr_elem_amount;
  printf("Unesite broj članova niza: ");
  scanf("%d", &arr_elem_amount);

  if (arr_elem_amount > N) {
    printf("\nERR: broj članova niza mora biti manji od %d!\n", N);
    return 1;
  }

  int arr[N];
  input_arr(arr, arr_elem_amount);

  int m, n;
  printf("Unesite m i n: \n(format: m, n)\n");
  scanf("%d, %d", &m, &n);

  if (m > arr_elem_amount || n > arr_elem_amount) {
    printf("\nERR: m i n moraju bit manji od broja clanova niza!\n");
    return 1;
  }
  if (m > n) {
    printf("\nERR: m > n!");
    return 1;
  }

  int sliced_arr_sum, sliced_arr_elem_amount = 0;
  sliced_arr_fun(arr, m, n, &sliced_arr_elem_amount, &sliced_arr_sum);

  printf("Suma elemenata između %d. i %d: %d.\n", m, n, sliced_arr_sum);
  printf("Broj elemenata između %d. i %d: %d.\n", m, n, sliced_arr_elem_amount);

  return 0;
}
