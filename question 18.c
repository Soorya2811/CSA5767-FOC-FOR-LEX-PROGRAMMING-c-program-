#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
OUTPUT:
Enter an integer number: 24
The sum of the digits is: 6
