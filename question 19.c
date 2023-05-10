#include <stdio.h>

int main() {
    int number, reversedNumber = 0, digit;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}
OUTPUT:
Enter an integer number: 45
The reversed number is: 54
