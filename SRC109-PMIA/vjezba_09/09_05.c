#include <stdio.h>

/*
5. Definirati strukturu za vrijeme. Napisati funkciju koja prima dva argumenta
koja predstavljaju vrijeme i vraća razliku vremena. Ispišite tu razliku u
formatu hh:mm:ss.
*/

typedef struct {
  int hr, min, s;
} Time;

Time time_diff(Time *a, Time *b);

int main(void) {
  Time a = {2, 30, 47};
  Time b = {12, 2, 9};
  Time ab_diff = time_diff(&a, &b);

  printf("a: %d:%d:%d\n", a.hr, a.min, a.s);
  printf("b: %d:%d:%d\n", b.hr, b.min, b.s);

  printf("ab_difference: %d:%d:%d\n", ab_diff.hr, ab_diff.min, ab_diff.s);

  return 0;
}

Time time_diff(Time *a, Time *b) {
  Time diff = {0, 0, 0};
  int diff_sec, a_sec, b_sec;
  diff_sec = a_sec = b_sec = 0;

  a_sec = a->s + (a->min * 60) + (a->hr * 3600);
  b_sec = b->s + (b->min * 60) + (b->hr * 3600);
  diff_sec = b_sec - a_sec;

  diff.hr = diff_sec / 3600;
  diff_sec -= diff.hr * 3600;
  diff.min = diff_sec / 60;
  diff_sec -= diff.min * 60;
  diff.s = diff_sec;

  /* not needed */
  // diff_sec -= diff.s;
  // if (diff_sec) exit(-1);

  return diff;
}
