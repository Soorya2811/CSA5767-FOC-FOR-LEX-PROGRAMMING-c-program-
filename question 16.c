#include <stdio.h>

int main() {
    int n, i, number;
    int sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &number);
        sum += number;
    }

    average = (float)sum / n;

    printf("The sum of the numbers is: %d\n", sum);
    printf("The average of the numbers is: %.2f\n", average);

    return 0;
}

OUTPUT:
Enter the number of elements: 6
Enter 6 numbers:
1 2 3 4 5 6 
The sum of the numbers is: 21
The average of the numbers is: 3.50
