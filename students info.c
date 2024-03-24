//Moses Irungu
//ENE212-0164/2021
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COURSES 3
#define MAX_NAME_LENGTH 50
#define MAX_REG_NUM_LENGTH 15

// Define a structure to hold student information
typedef struct {
    char name[MAX_NAME_LENGTH];
    char reg_num[MAX_REG_NUM_LENGTH];
    char courses[MAX_COURSES][MAX_NAME_LENGTH];
} Student;

// Function to read student information from the user
void readStudentInfo(Student *student) {
    printf("Enter student name: ");
    fgets(student->name, MAX_NAME_LENGTH, stdin);
    student->name[strcspn(student->name, "\n")] = 0; 
    // Remove newline character

    printf("Enter registration number: ");
    fgets(student->reg_num, MAX_REG_NUM_LENGTH, stdin);
    student->reg_num[strcspn(student->reg_num, "\n")] = 0;
    // Remove newline character

    printf("Enter courses (at least %d courses):\n", MAX_COURSES);
    for (int i = 0; i < MAX_COURSES; i++) {
        printf("Course %d: ", i+1);
        fgets(student->courses[i], MAX_NAME_LENGTH, stdin);
        student->courses[i][strcspn(student->courses[i], "\n")] = 0; 
        // Remove newline character
    }
}

// Function to display student information
void displayStudentInfo(Student student) {
    printf("\nStudent Name: %s\n", student.name);
    printf("Registration Number: %s\n", student.reg_num);
    printf("Courses:\n");
    for (int i = 0; i < MAX_COURSES; i++) {
        printf("- %s\n", student.courses[i]);
    }
}

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    getchar(); 
    // Clearing input buffer

    // Dynamically allocate memory for the students
    Student *students = (Student *)malloc(num_students * sizeof(Student));

    // Read information for each student
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter information for Student %d:\n", i+1);
        readStudentInfo(&students[i]);
    }

    // Display information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < num_students; i++) {
        printf("\nStudent %d:\n", i+1);
        displayStudentInfo(students[i]);
    }

    // Editing information of at least one student
    int student_index;
    printf("\nEnter the index of the student you want to edit (1-%d): ", num_students);
    scanf("%d", &student_index);
    getchar(); // Clearing input buffer

    if (student_index >= 1 && student_index <= num_students) {
        printf("\nEnter new information for Student %d:\n", student_index);
        readStudentInfo(&students[student_index - 1]);
        printf("\nUpdated Information for Student %d:\n", student_index);
        displayStudentInfo(students[student_index - 1]);
    } else {
        printf("\nInvalid student index!\n");
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}
