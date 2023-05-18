#include <stdio.h>
#include <math.h>

double calculateFactorial(int n) {
    double factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

double calculatePower(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

double calculateCosine(double x, int terms) {
    double result = 1;
    int sign = -1;

    for (int n = 2; n <= terms; n += 2) {
        double term = sign * calculatePower(x, n) / calculateFactorial(n);
        result += term;
        sign *= -1;
    }

    return result;
}

int main() {
    double x;
    int terms;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    double cosine = calculateCosine(x, terms);

    printf("The cosine of %.2f radians using %d terms is: %.4f\n", x, terms, cosine);

    return 0;
}
OUTPUT 
Enter the value of x in radians: 7
Enter the number of terms: 3
The cosine of 7.00 radians using 3 terms is: -23.5000
