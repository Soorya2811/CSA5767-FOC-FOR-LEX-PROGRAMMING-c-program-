#include <stdio.h>

int main() {
    int n, i, sign = 1, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += sign * i;
        sign *= -1;
    }

    printf("The sum of the series 1, -2, 3, -4, 5, ..., %d is: %d\n", n, sum);

    return 0;
}


OUTPUT:
Enter the value of N: 10
The sum of the series 1, -2, 3, -4, 5, ..., 10 is: -5
