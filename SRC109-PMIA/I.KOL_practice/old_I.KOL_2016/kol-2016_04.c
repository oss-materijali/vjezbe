#include <math.h>
#include <stdio.h>

/*
4. Napisati funkciju koja za niz prirodnih brojeva vraca aritmeticku sredinu,
geometrijsku sredinu i medijan.

Aritmetica sredina niza a1 , a2 , ..., an je (n/1) *(a1 + a2 + ... + an ).

Geometrijska sredina a1 , a2 , ..., an je (a1 · a2 · ... · an )^1/n

Medijan je srednji clan u sortiranom nizu ili aritmeticka sredina srednja dva
clana ako je broj elemenata paran.
*/

void fun(int arr[], int size, float *arit, float *geom, float *medi) {
  float sum = 0;
  int mul = 1;

  for (int i = 0; i < size; i++) {
    sum = sum + arr[i];
    mul = mul * arr[i];
  }

  *arit = sum / size;
  *geom = pow(mul, (1.0 / size));

  if (size % 2 == 0) {
    *medi = (arr[size / 2] + arr[size / 2 - 1]) / 2;
  } else {
    *medi = arr[size / 2];
  }
}

void sort_arr(int a[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = i; j < size; j++) {
      if (a[i] > a[j]) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }
}

int main(void) {
  float arit, geom, medi;
  arit = geom = medi = 0;

  int arr[4] = {1, 2, 4, 5};
  int arr_size = sizeof(arr) / sizeof(arr[0]);

  sort_arr(arr, arr_size);
  fun(arr, arr_size, &arit, &geom, &medi);

  printf("ARITMETICKA SREDINA: %f\n", arit);
  printf("GEOMETRIJSKA SREDINA: %f\n", geom);
  printf("MEDIJAN: %f\n", medi);

  return 0;
}
