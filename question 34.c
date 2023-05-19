#include <stdio.h>

double calculateGPA(char grades[], int numCourses) {
    double totalPoints = 0.0;
    double totalCredits = 0.0;

    for (int i = 0; i < numCourses; i++) {
        switch (grades[i]) {
            case 'A':
                totalPoints += 4.0;
                break;
            case 'B':
                totalPoints += 3.0;
                break;
            case 'C':
                totalPoints += 2.0;
                break;
            case 'D':
                totalPoints += 1.0;
                break;
            case 'F':
                totalPoints += 0.0;
                break;
            default:
                printf("Invalid grade entered: %c\n", grades[i]);
                return -1.0; // Return -1 to indicate an error
        }

        totalCredits += 1.0; // Assuming each course has 1 unit of credit
    }

    double gpa = totalPoints / totalCredits;
    return gpa;
}

int main() {
    int numCourses;
    printf("Enter the number of courses: ");
    scanf("%d", &numCourses);

    char grades[numCourses];

    for (int i = 0; i < numCourses; i++) {
        printf("Enter the grade for course %d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    double gpa = calculateGPA(grades, numCourses);

    if (gpa != -1.0) {
        printf("GPA: %.2lf\n", gpa);
    }

    return 0;
}


OUTPUT 
Enter the number of courses: 5
Enter the grade for course 1: B
Enter the grade for course 2: A
Enter the grade for course 3: A
Enter the grade for course 4: C
Enter the grade for course 5: B
GPA: 3.20
