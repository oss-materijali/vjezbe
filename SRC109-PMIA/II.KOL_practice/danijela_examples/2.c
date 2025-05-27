#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Drugi zadatak
Definiraj strukturu student koja sadrži ime, prezime, prosjek.
Napisati funkciju koja vraća studenta s najvećim prosjekom.
U glavnom programu učitati podatke za n studenata.
*/

/* NOTE: i do not know what "U glavnom programu učitaj podatke za n..." means,
 * so i have one type of solution where the user inputs the data in 2.c, and
 * in 4.c the data is already parsed and in the program (less of a hassle) */

#define STUDENT_BUF 50

typedef struct {
  char name[STUDENT_BUF], surname[STUDENT_BUF];
  float gpa;
} Student;

void print_students(Student students[], int size);
Student highest_scoring(Student students[], int size);

int main(void) {
  int n;
  printf("n: ");
  scanf("%d", &n);

  Student *students = (Student *)malloc(sizeof(Student) * n);
  if (!students)
    return -1;

  for (int i = 0; i < n; i++) {
    printf("Unesi podatke studenta[%d]: \n", i);
    printf("\time: ");
    getchar();
    fgets(students[i].name, STUDENT_BUF, stdin);
    printf("\tprezime: ");
    fgets(students[i].surname, STUDENT_BUF, stdin);
    printf("\tprosjek: ");
    scanf(" %f", &students[i].gpa);
    /* remove fgets whitespace */
    students[i].name[strcspn(students[i].name, "\n")] = '\0';
    students[i].surname[strcspn(students[i].surname, "\n")] = '\0';
  }

  print_students(students, n);

  Student high_student = highest_scoring(students, n);

  printf("\nhighest scoring: ");
  print_students(&high_student, 1);

  return 0;
}

Student highest_scoring(Student students[], int size) {
  Student high = students[0];
  int high_i = 0;
  for (int i = 0; i < size; i++) {
    if (high.gpa < students[i].gpa)
      high_i = i;
  }
  high = students[high_i];
  return high;
}
void print_students(Student students[], int size) {
  for (int i = 0; i < size; i++)
    printf("%s\t | \t%s\t | \t%f\n", students[i].name, students[i].surname,
           students[i].gpa);
}
