#include <stdio.h>

int main() {
    int studentNumber, numberGrade;
    int totalAs = 0, totalBs = 0, totalCs = 0, totalDs = 0, totalFs = 0;

    for (int i = 1; i <= 200; i++) {
        printf("Enter the student number and number grade for student %d: ", i);
        scanf("%d %d", &studentNumber, &numberGrade);

        // Calculate letter grade
        char letterGrade;
        if (numberGrade >= 90 && numberGrade <= 100) {
            letterGrade = 'A';
            totalAs++;
        } else if (numberGrade >= 78 && numberGrade <= 89) {
            letterGrade = 'B';
            totalBs++;
        } else if (numberGrade >= 65 && numberGrade <= 77) {
            letterGrade = 'C';
            totalCs++;
        } else if (numberGrade >= 50 && numberGrade <= 64) {
            letterGrade = 'D';
            totalDs++;
        } else {
            letterGrade = 'F';
            totalFs++;
        }

        // Print student information
        printf("Student Number: %d\n", studentNumber);
        printf("Number Grade: %d\n", numberGrade);
        printf("Letter Grade: %c\n\n", letterGrade);
    }

    // Print total number of each grade
    printf("Total As: %d\n", totalAs);
    printf("Total Bs: %d\n", totalBs);
    printf("Total Cs: %d\n", totalCs);
    printf("Total Ds: %d\n", totalDs);
    printf("Total Fs: %d\n", totalFs);

    return 0;
}

OUTPUT 
Enter the student number and number grade for student 1: 201 89
Student Number: 201
Number Grade: 89
Letter Grade: B

Enter the student number and number grade for student 2: 202 68
Student Number: 202
Number Grade: 68
Letter Grade: C

Enter the student number and number grade for student 3: 203 92
Student Number: 203
Number Grade: 92
Letter Grade: A

Enter the student number and number grade for student 4: 204 75
Student Number: 204
Number Grade: 75
Letter Grade: C
