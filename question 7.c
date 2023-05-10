#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("The sum of odd numbers up to %d is: %d\n", n, sum);

    return 0;
}

OUTPUT:
Enter the value of n: 10
The sum of odd numbers up to 10 is: 25
