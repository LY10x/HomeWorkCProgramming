#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[16];
    int class_number;
    double average_grade;
} Student;

void print_students(Student* students, int num_students) {
    for (int i = 0; i < num_students; i++) {
        printf("Name: %s, Class Number: %d, Average Grade: %.2f\n", students[i].name, students[i].class_number, students[i].average_grade);
    }
}

int main() {
    int num_students = 0;
    Student* students = NULL;
    int choice;

    while (1) {
        printf("\n1. Add student\n2. Print students\n3. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            if (num_students % 10 == 0) {
                students = (Student*)realloc(students, sizeof(Student) * (num_students + 10));
            }

            Student new_student;

            printf("Enter name (up to 15 characters): ");
            scanf("%15s", new_student.name);
            printf("Enter class number: ");
            scanf("%d", &new_student.class_number);
            printf("Enter average grade: ");
            scanf("%lf", &new_student.average_grade);

            students[num_students++] = new_student;
        } else if (choice == 2) {
            print_students(students, num_students);
        } else if (choice == 3) {
            free(students);
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}