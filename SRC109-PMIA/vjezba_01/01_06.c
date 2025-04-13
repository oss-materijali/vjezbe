#include <stdio.h>

int main(void) {
  int input;
    
  printf("Unesi kune:\n");
  scanf("%d", &input);
    
  if (input < 0) {
    printf("Broj kuna nesmije biti negativan!\n");
    return 1;
  }

  int kov_5, kov_2, kov_1;

  kov_5 = input / 5;
  input = input - kov_5 * 5;
  kov_2 = input / 2;
  input = input - kov_2 * 2;
  kov_1 = input;
  input = input - kov_1 * 1;

  printf("\n5kn: %d\n2kn: %d\n1kn: %d\n", kov_5, kov_2, kov_1);
}
