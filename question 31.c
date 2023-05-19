#include <stdio.h>

int main() {
    int originalNumber, newNumber, sum = 0;

    printf("Enter a four-digit number: ");
    scanf("%d", &originalNumber);

    // Add the digits of the original number
    int temp = originalNumber;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    // Add a fifth digit to make the sum even
    if (sum % 2 == 0) {
        newNumber = originalNumber * 10;
    } else {
        newNumber = originalNumber * 10 + 1;
    }

    printf("Original Number: %d\n", originalNumber);
    printf("New Number: %d\n", newNumber);

    return 0;
}

OUTPUT
Enter a four-digit number: 4999
Original Number: 4999
New Number: 49991
