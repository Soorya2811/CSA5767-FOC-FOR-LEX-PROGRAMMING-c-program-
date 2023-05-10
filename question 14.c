#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Error: Factorial of a negative number is undefined.\n");
    }
    else {
        for (i = 1; i <= number; ++i) {
            factorial *= i;
        }
        
        printf("The factorial of %d is %llu\n", number, factorial);
    }
    
    return 0;
}
OUTPUT :
Enter a positive integer: 6
The factorial of 6 is 720

