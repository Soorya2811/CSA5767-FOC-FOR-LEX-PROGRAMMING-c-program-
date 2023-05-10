#include <stdio.h>

int main() {
    int number, digit, reversedNumber = 0;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("The digits of the number are: ");

    if (number == 0) {
        printf("0\n");
    } else {
        if (number < 0) {
            printf("-");
            number = -number;
        }

        while (number != 0) {
            digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }

        while (reversedNumber != 0) {
            digit = reversedNumber % 10;
            printf("%d ", digit);
            reversedNumber /= 10;
        }

        printf("\n");
    }

    return 0;
}
OUTPUT:
Enter an integer number: 45
The digits of the number are: 4 5 
