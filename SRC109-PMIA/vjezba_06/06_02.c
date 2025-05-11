#include <stdio.h>
#include <stdlib.h>

/*
1. Napisati funkciju koja alocira niz brojeva duljine n
u kojem su svi članovi 0 (koristiti calloc() funkciju.)

Funkcija napuni parna mjesta u nizu brojem nula do tog mjesta,
te vrati novi niz.

Primjer: za n = 10 novi niz je [0, 0, 2, 0, 3, 0, 4, 0, 5, 0].
*/

/*
WARN: the exercise instructions are different from the given example
(speculated typo: n = 10; arr = [1, 0, 2, 0, 3, 0, 4, 0, 5, 0])
*/

void print_arr(int a[], int size);
int *fancy_calloc(int n);

int main(void) {
  int n = 10;

  int *arr = fancy_calloc(n);
  if (!arr) return 1;

  print_arr(arr, n);

  free(arr);
  return 0;
}

int *fancy_calloc(int n) {
  int *arr = (int *)calloc(n, sizeof(int));
  if (!arr) return NULL;

  /*
  iter values required to start
  counting from 2 for some reason
  (skipping the value 1 in [0],
  even tho [0] is an even index)

  `j` and `i` modified to match the exercise example
  */
  int j = 2;
  for (int i = 1; i < n; i++)
    if (i % 2 == 0)
      arr[i] = j++;

  return arr;
}

void print_arr(int a[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", a[i]);
  printf("\n");
}
