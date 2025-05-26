#include <stdio.h>
#include <stdlib.h>

/*
6. * Definirati strukturu student koja se sastoji od imena i prezimena, JMBAG,
grupe i rezultata na kolokviju. Napisati funkciju koja će iz niza studenata
vratiti niz onih studenata koji su prošli kolokvij (tj. imali preko 40%)
*/

typedef struct {
  char name[50], surname[50];
  char jmbag[20], group;
  int result;
} Student;

Student *passed(Student students[], int size, int *pass_size);
void print_students(Student students[], int size);

int main(void) {
  Student students[] = {{"Jackie", "Welles", "1234567890", 'A', 72},
                        {"Evelyn", "Parker", "7890123456", 'C', 41},
                        {"Johnny", "Silverhand", "1278903456", 'B', 29}};
  int size = sizeof(students) / sizeof(students[0]);

  int pass_size;
  Student *students_pass = passed(students, size, &pass_size);

  print_students(students, size);
  printf("---\n");
  print_students(students_pass, pass_size);

  free(students_pass);
  return 0;
}

Student *passed(Student students[], int size, int *pass_size) {
  int pass_ctr = 0;
  Student *students_pass = (Student *)malloc(sizeof(Student) * size);

  for (int i = 0; i < size; i++)
    if (students[i].result > 40)
      students_pass[pass_ctr++] = students[i];

  Student *students_pass_smaller =
      (Student *)realloc(students_pass, sizeof(Student) * pass_ctr);

  *pass_size = pass_ctr;
  return students_pass_smaller;
}

void print_students(Student students[], int size) {
  for (int i = 0; i < size; i++)
    printf("%s\t\t%s\t\t%s\t%c\t%d\t\n", students[i].name, students[i].surname,
           students[i].jmbag, students[i].group, students[i].result);
}
