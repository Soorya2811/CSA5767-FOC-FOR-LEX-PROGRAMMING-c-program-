#include <stdio.h>

int main() {
    int age;
    double ticketCharge;

    printf("Enter the age of the person: ");
    scanf("%d", &age);

    if (age >= 55) {
        ticketCharge = 10.0;
    } else if (age >= 21 && age <= 54) {
        ticketCharge = 15.0;
    } else if (age >= 13 && age <= 20) {
        ticketCharge = 10.0;
    } else if (age >= 3 && age <= 12) {
        ticketCharge = 5.0;
    } else {
        ticketCharge = 0.0;
    }

    printf("Ticket Charge: $%.2lf\n", ticketCharge);

    return 0;
}
OUTPUT
Enter the age of the person: 45
Ticket Charge: $15.00
