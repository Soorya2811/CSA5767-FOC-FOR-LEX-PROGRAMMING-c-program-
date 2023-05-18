#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Swapping using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}


OUTPUT 
Enter the first number: 6
Enter the second number: 4
Before swapping:
First number: 6
Second number: 4

After swapping:
First number: 4
Second number: 6
