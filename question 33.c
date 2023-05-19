#include <stdio.h>

int main() {
    int numberOfPeople;
    int isCompanyBusiness;
    int isOver60;
    double basePrice;
    double totalPrice;
    double discount;

    printf("Enter the number of people: ");
    scanf("%d", &numberOfPeople);

    printf("Is the customer staying on company business? (1 for yes, 0 for no): ");
    scanf("%d", &isCompanyBusiness);

    printf("Is the customer over 60 years of age? (1 for yes, 0 for no): ");
    scanf("%d", &isOver60);

    if (numberOfPeople == 2) {
        basePrice = 85.0;
    } else if (numberOfPeople == 3) {
        basePrice = 90.0;
    } else if (numberOfPeople == 4) {
        basePrice = 95.0;
    } else if (numberOfPeople > 4) {
        basePrice = 95.0 + (numberOfPeople - 4) * 6.0;
    } else {
        printf("Invalid number of people.\n");
        return 1; // Exit the program with an error code
    }

    totalPrice = basePrice;

    if (isCompanyBusiness) {
        discount = 0.2;
    } else if (isOver60) {
        discount = 0.15;
    } else {
        discount = 0.0;
    }

    totalPrice -= totalPrice * discount;

    printf("Cost of the room: $%.2lf\n", totalPrice);

    return 0;
}

OUTPUT 
Enter the number of people: 9
Is the customer staying on company business? (1 for yes, 0 for no): 1
Is the customer over 60 years of age? (1 for yes, 0 for no): 0
Cost of the room: $100.00
