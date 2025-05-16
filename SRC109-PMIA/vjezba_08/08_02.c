#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2. Napisati funkciju koja provjerava da li je uneseni string broj i ako je,
izračuna i vraća prosječnu vrijednost parnih i prosječnu vrijednost neparnih
znamenaka. Ako nije broj, vraća obje nule.

Primjer: Za string "12345" funkcija vraća 3 i 3.
*/

void average_digits(char str[], float *ari_even, float *ari_odd);

int main(void) {
  char string_a[] = "12345";
  char string_b[] = "335";
  float a_even, a_odd;
  float b_even, b_odd;
  average_digits(string_a, &a_even, &a_odd);
  average_digits(string_b, &b_even, &b_odd);
  printf("string_a: %s [even: %f, odd: %f]\n", string_a, a_even, a_odd);
  printf("string_b: %s [even: %f, odd: %f]\n", string_b, b_even, b_odd);

  return 0;
}

void average_digits(char str[], float *ari_even, float *ari_odd) {
  *ari_even = 0.0;
  *ari_odd = 0.0;

  int sum_even, sum_odd, digit;
  int even_iter, odd_iter;
  sum_even = sum_odd = 0;
  even_iter = odd_iter = 0;

  for (int i = 0; i < strlen(str); i++) {
    if (str[i] < '0' || str[i] > '9') return;
    digit = str[i] - '0';

    if (digit % 2 == 0) {
      sum_even += digit;
      even_iter++;
    } else {
      sum_odd += digit;
      odd_iter++;
    }
  }

  even_iter = (!even_iter) ? 1 : even_iter;
  odd_iter = (!odd_iter) ? 1 : odd_iter;

  *ari_even = (float)sum_even / even_iter;
  *ari_odd = (float)sum_odd / odd_iter;

  return;
}
